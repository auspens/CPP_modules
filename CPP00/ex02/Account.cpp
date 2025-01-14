/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:32:03 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/14 10:51:13 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void){return Account::_nbAccounts;}

int Account::getTotalAmount(void){return Account::_totalAmount;}

int Account::getNbDeposits(void){return Account::_totalNbDeposits;}

int Account::getNbWithdrawals(void){return Account::_totalNbWithdrawals;}

void Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << " accounts:\033[36m" << getNbAccounts()
			<<"\033[0m;total:\033[36m" << getTotalAmount()
			<< "\033[0m;deposits:\033[36m" << getNbDeposits()
			<< "\033[0m;withdrawals:\033[36m" << getNbWithdrawals()
			<< "\033[0m" << std::endl;
}

Account::Account(){}

Account::Account(int initial_deposit)
		:_accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	++_nbAccounts;
	_totalAmount +=_amount;
	_displayTimestamp();
	std::cout << " index:\033[36m" << _accountIndex
	<< "\033[0m;amount:\033[36m" << _amount
	<< "\033[0m;created" << std::endl;
}

Account::~Account(void){
	--_nbAccounts;
	_totalAmount-=_amount;
	_displayTimestamp();
	std::cout << " index:\033[36m" << _accountIndex
	<< "\033[0m;amount:\033[36m" << _amount
	<< "\033[0m;closed" << std::endl;
}

void Account::makeDeposit(int deposit){
	int p_amount = _amount;
	_amount += deposit;
	Account::_totalAmount += deposit;
	++Account::_totalNbDeposits;
	++_nbDeposits;
	_displayTimestamp();
	std::cout << " index:\033[36m" << _accountIndex
			<< "\033[0m;p_amount:\033[36m" << p_amount
			<< "\033[0m;deposit:\033[36m" << deposit
			<< "\033[0m;amount:\033[36m" << _amount
			<< "\033[0m;nb_deposits:\033[36m" << _nbDeposits
			<< "\033[0m" << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << " index:\033[36m" << _accountIndex
			<< "\033[0m;p_amount:\033[36m" << _amount
			<< "\033[0m;";
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return(false);
	}
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	++Account::_totalNbWithdrawals;
	++_nbWithdrawals;
	std::cout << "\033[0m;withdrawal:\033[36m" << withdrawal
			<< "\033[0m;amount:\033[36m" << _amount
			<< "\033[0m;nb_withdrawals:\033[36m" << _nbWithdrawals
			<< "\033[0m" << std::endl;
	return (true);
}

int Account::checkAmount(void) const{return (_amount);}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " index:\033[36m" << _accountIndex
			<< "\033[0m;amount:\033[36m" << _amount
			<< "\033[0m;deposits:\033[36m" << _nbDeposits
			<< "\033[0m;withdrawals:\033[36m" << _nbWithdrawals
			<< "\033[0m" << std::endl;
}

void Account::_displayTimestamp(void){
	time_t rawtime;
	struct tm *timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << "[" << timeinfo->tm_year + 1900 << timeinfo->tm_mon + 1 << timeinfo->tm_mday
			<<"_" << timeinfo->tm_hour <<timeinfo->tm_min << timeinfo->tm_sec << "]";
}
