/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 20:53:56 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/14 18:43:12 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

// ___
// Static variables

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// ___
// Static methods

int		Account::getNbAccounts(void) {
	return _nbAccounts;
}

int		Account::getTotalAmount(void) {
	return _totalAmount;
}

int		Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout \
		<< "accounts:" << getNbAccounts() << ";" \
		<< "total:" << getTotalAmount() << ";" \
		<< "deposits:" << getNbDeposits() << ";" \
		<< "withdrawals:" << getNbWithdrawals() << "\n";
}

// ___
// Constructor/destructor

Account::Account(int initial_deposit) {
	_accountIndex = getNbAccounts();
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_amount = initial_deposit;
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout \
		<< "index:" << _accountIndex << ";" \
		<< "amount:" << _amount << ";" \
		<< "created\n";
}

Account::~Account(void) {
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout \
		<< "index:" << _accountIndex << ";" \
		<< "amount:" << _amount << ";closed\n";
}

// ___
// Public methods

void	Account::makeDeposit(int deposit) {
	int p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout \
		<< "index:" << _accountIndex << ";" \
		<< "p_amount:" << p_amount << ";" \
		<< "deposit:" << deposit << ";" \
		<< "amount:" << _amount << ";" \
		<< "nb_deposits:" << _nbDeposits \
		<< "\n";
}

bool	Account::makeWithdrawal(int withdrawal) {
	int p_amount = _amount;
	_displayTimestamp();
	std::cout \
		<< "index:" << _accountIndex << ";" \
		<< "p_amount:" << p_amount << ";" \
		<< "withdrawal:";
	if (withdrawal > _amount) {
		std::cout << "refused\n";
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout \
		<< withdrawal << ";" \
		<< "amount:" << _amount << ";" \
		<< "nb_withdrawals:" << _nbWithdrawals << "\n";
	return true;
}

int		Account::checkAmount(void) const {
	return _amount;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout \
		<< "index:" << _accountIndex << ";" \
		<< "amount:" << _amount << ";" \
		<< "deposits:" << _nbDeposits << ";"\
		<< "withdrawals:" << _nbWithdrawals \
		<< "\n";
}

void	Account::_displayTimestamp(void) {
	char str[19];
	time_t timestamp;
	struct tm *datetime;
	time(&timestamp);
	datetime = localtime(&timestamp);
	strftime(
		str, 19, "[%Y%m%d_%H%M%S] ", datetime
	);
	std::cout << str;
}