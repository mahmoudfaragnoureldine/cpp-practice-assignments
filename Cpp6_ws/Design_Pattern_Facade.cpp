#include <iostream>
#include <unistd.h>

class CPU
{
    public:
        void start() const { std::cout << "CPU started..." << std::endl; }
        void stop() const { std::cout << "CPU stoped..." << std::endl; }
};

class Memory
{
    public:
        void load() const { std::cout << "Memory loaded..." << std::endl; }
        void unload() const { std::cout << "Memory unloaded..." << std::endl; }
};

class Disk
{
    public:
        void Mount() const { std::cout << "Disk mount..." << std::endl; }
        void Umount() const { std::cout << "Disk unmount..." << std::endl; }
};

class InterfaceFacade
{
    private:
        CPU cpu;
        Memory memory;
        Disk disk;
    public:
        void startComputer() const {
            cpu.start();
            memory.load();
            disk.Mount();
        }
        void stopComputer() const {
            cpu.stop();
            memory.unload();
            disk.Umount();
        }
};

int main() {
    InterfaceFacade com;

    com.startComputer();

    sleep(5);

    com.stopComputer();

    return 0;
}