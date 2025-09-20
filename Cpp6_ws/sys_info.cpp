#include <iostream>
#include <cstdlib>   // system()

using namespace std;

int main() {
    cout << "================ Device Info ================\n\n";

    cout << "[CPU Info]\n";
    system("wmic cpu get Name");

    cout << "\n[RAM Info]\n";
    system("wmic memorychip get Capacity,Speed,Manufacturer");

    cout << "\n[Storage Info]\n";
    system("wmic diskdrive get Caption,Size,MediaType");

    cout << "\n[GPU Info]\n";
    system("wmic path win32_VideoController get Name");

    cout << "\n[Battery Info]\n";
    system("wmic path Win32_Battery get DesignCapacity,FullChargeCapacity");

    cout << "============================================\n";
    return 0;
}
