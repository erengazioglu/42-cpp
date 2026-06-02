#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr \
            << "Error: Wrong number of arguments.\n" \
            << "Usage: ./megaphone.out <string_to_print>\n";
        return 1;
    }
    std::string msg = argv[1];
    std::cout << "Hello World!\n";
    return 0;
}