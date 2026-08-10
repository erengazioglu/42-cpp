#include "Account.hpp"

int Account::getAmount(void) {
	return _amount;
}

int Account::deposit(int amount) {
	_amount += amount;
	return _amount;
};

int Account::withdraw(int amount) {
	if (amount >= _amount) {
		amount = _amount;
		_amount = 0;
		return amount;
	}
	_amount -= amount;
	return amount;
};