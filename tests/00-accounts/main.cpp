#include "Account.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int main(void) {
	Account acc1;
	Account acc2;

	acc1.deposit(100);
	acc2.deposit(33);
	std::cout << acc1.getAmount() << "\n";
	std::cout << acc1.deposit(50) << "\n";
	std::cout << "Total: " << Account::getTotalAmount() << "\n";


	std::cout << "withdrawing 20: got " << acc1.withdraw(20);
	std::cout << ", left with " << acc1.getAmount() << "\n";
	
	std::cout << "withdrawing 150: got " << acc1.withdraw(150);
	std::cout << ", left with " << acc1.getAmount() << "\n";
	
}