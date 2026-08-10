#include "Account.hpp"

int Account::_totalAmount = 0;

int Account::getAmount(void) {
	return _amount;
}

int Account::deposit(int amount) {
	_amount += amount;
	_totalAmount += amount;
	return _amount;
};

int Account::withdraw(int amount) {
	if (amount >= _amount) {
		amount = _amount;
		_amount = 0;
		_totalAmount -= amount;
		return amount;
	}
	_amount -= amount;
	_totalAmount -= amount;
	return amount;
};

int Account::getTotalAmount(void) {
	return _totalAmount;
}

Account::Account() {
	_amount = 0;
};
Account::Account(int amount) {
	_amount = amount;
}