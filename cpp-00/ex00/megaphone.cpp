#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        std::string msg = argv[i];
        for (int c = 0; c < (int) msg.length(); c++) {
            if (std::isalpha(msg[c]))
                msg[c] = std::toupper(msg[c]);
        }
        std::cout << msg;
    }
    std::cout << std::endl;
    return 0;
}