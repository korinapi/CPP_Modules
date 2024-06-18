/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:10:09 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/18 14:57:06 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";\033[32mcreated\033[0m" << std::endl;
}

Account::~Account()
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";\033[31mclosed\033[0m" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
			  << ";deposit:" << deposit << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount = _amount;
	if (_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
				  << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
				  << ";withdrawal:" << withdrawal << ";amount:" << _amount
				  << ";withdrawals:" << _nbDeposits << std::endl;
	}
	return true;
}

int Account::checkAmount() const
{
	return _amount;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	const char *blue = "\033[34m";
	const char *reset = "\033[0m";
	std::cout << "index:" << blue << _accountIndex << reset
			  << ";amount:" << blue << _amount << reset
			  << ";deposits:" << blue << _nbDeposits << reset
			  << ";withdrawals:" << blue << _nbWithdrawals << reset << std::endl;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	const char *blue = "\033[34m";
	const char *reset = "\033[0m";

	std::cout << "accounts:" << blue << _nbAccounts << reset
			  << ";total:" << blue << _totalAmount << reset
			  << ";deposits:" << blue << _totalNbDeposits << reset
			  << ";withdrawals:" << blue << _totalNbWithdrawals << reset
			  << std::endl;
}

void Account::_displayTimestamp()
{
	std::time_t now = std::time(0);
	std::tm *localTime = std::localtime(&now);

	char buffer[20];
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localTime);
	std::cout << "[" << buffer << "] ";
}