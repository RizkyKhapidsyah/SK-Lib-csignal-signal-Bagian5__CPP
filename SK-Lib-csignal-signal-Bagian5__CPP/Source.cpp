#include <iostream>
#include <csignal>
#include <conio.h>

using namespace std;

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

sig_atomic_t signalled = 0;

void handler(int sig) {
    signalled = 1;
}

int main() {
    signal(SIGINT, handler);

    raise(SIGINT);

    if (signalled) {
        cout << "Signal is handled";
    } else {
        cout << "Signal is not handled";
    }
        
    _getch();
    return 0;
}