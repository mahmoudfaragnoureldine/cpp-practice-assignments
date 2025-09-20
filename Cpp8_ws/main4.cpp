#include <iostream>
#include <thread>
#include <queue>
#include <string>
#include <mutex>
#include <condition_variable>
#include <chrono>

std::queue<std::string> q;        
std::mutex mtx;                   
std::condition_variable cv;       
bool finished = false;           

void producer() {
    for (int i = 1; i <= 5; i++) {
        std::string msg = "Message " + std::to_string(i);

        {
            std::unique_lock<std::mutex> lock(mtx);
            q.push(msg);
            std::cout << "[Producer] Produced: " << msg << std::endl;
        }

        cv.notify_one(); 
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }


    {
        std::unique_lock<std::mutex> lock(mtx);
        finished = true;
    }
    cv.notify_one();
}

void consumer() {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);

        cv.wait(lock, [] { return !q.empty() || finished; });

        while (!q.empty()) {
            std::string msg = q.front();
            q.pop();
            std::cout << "[Consumer] Consumed: " << msg << std::endl;
        }

        if (finished && q.empty()) {
            break;
        }
    }
}

int main() {
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    std::cout << "Done!" << std::endl;
    return 0;
}
