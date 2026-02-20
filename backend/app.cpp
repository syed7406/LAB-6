#include <iostream>
#include <unistd.h>

int main() {
    std::cout << "Hello from Jenkins CI/CD Lab 6!" << std::endl;

    while(true) {
        sleep(5);
        std::cout << "Application Running..." << std::endl;
    }

    return 0;
}#include <iostream>

int main() {
    std::cout << "Hello from Jenkins CI/CD Lab 6!" << std::endl;
    return 0;
}
