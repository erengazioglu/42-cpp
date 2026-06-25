#include <iostream>
#include <string>

void megaphone(std::string msg) {
    for (int i = 0; i < (int) msg.length(); i++) {
        // trim left and right
        if (std::isalpha(msg[i]))
            msg[i] = std::toupper(msg[i]);
    }
    std::cout << msg;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr \
            << "Error: Wrong number of arguments.\n" \
            << "Usage: ./megaphone.out <string_to_print>\n";
        return 1;
    }
    std::string msg = argv[1];
    for (int i = 0; i < (int) msg.length(); i++) {
        if (std::isalpha(msg[i]))
            msg[i] = std::toupper(msg[i]);
    }
    std::cout << msg << std::endl;
    return 0;
}