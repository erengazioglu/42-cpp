#include "classes.hpp"

Base::Base() {
	std::cout << GRN << "Base | constructor\n";
}

Base::~Base() {
	std::cout << RED << "Base | destructor\n";
}

Left::Left() {
	std::cout << GRN << "Left | constructor\n";
}

Left::~Left() {
	std::cout << RED << "Left | destructor\n";
}

Right::Right() {
	std::cout << GRN << "Right | constructor\n";

}

Right::~Right() {
	std::cout << RED << "Right | destructor\n";

}

Both::Both() {
	std::cout << GRN << "Both | constructor\n";
}

Both::~Both() {
	std::cout << RED << "Both | destructor\n";
}