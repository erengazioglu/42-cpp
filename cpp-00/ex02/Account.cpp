/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 20:53:56 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/13 23:17:39 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

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
}

// ___
// Public methods

void	Account::makeDeposit(int deposit) {
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal) {
	if (withdrawal > _amount)
		return false;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
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
	// format: '[yyyymmdd_hhmmss] '
	std::cout \
		<< "[] ";
}