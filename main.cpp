#include <iostream>
#include <sys/utsname.h>

int bar() {

}

int foo() {
    bar();
}

int main() {
    utsname u;
    if (uname(&u) != 0) {
        return 1;
    }
    std::cout << "Hello from " << u.nodename << "!" << std::endl;

    foo();
#ifdef BAR
    std::cout << "BAR definition was set" << std::endl;
#endif
#ifndef BAR
    std::cout << "BAR definition was NOT set" << std::endl;
#endif
}
