/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <ybesbes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:17:50 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/12 15:17:53 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit){

	this->_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount = _totalAmount + _amount;
	_displayTimestamp();
	std::cout <<" index:" <<_accountIndex <<";amount:" << _amount <<";created" << std::endl;
}

Account::~Account(){

	_displayTimestamp();
	std::cout <<" index:" <<_accountIndex <<";amount:" << _amount <<";closed" << std::endl;
}

void Account::_displayTimestamp(){

	time_t tt;
    time( &tt );
	char buffer[18];
    tm TM = *localtime( &tt );
	std::strftime(buffer, 18, "[%Y%m%d_%H%M%S]", &TM);
	std::cout<<buffer;
}

void Account::displayAccountsInfos(void){

	_displayTimestamp();
	std::cout <<" accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void Account::displayStatus( void ) const{

	_displayTimestamp();
	std::cout <<" index:" <<_accountIndex <<";amount:" << _amount <<";deposits:"<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}

void Account::makeDeposit( int deposit ){

	_nbDeposits++;
	_displayTimestamp();
	std::cout <<" index:" <<_accountIndex <<";p_amount:" << _amount <<";deposit:"<<deposit<<";amount:"<<_amount + deposit<<";nb_deposits:"<<_nbDeposits<<std::endl;
	_amount = _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal ){
	
	if (withdrawal <= _amount)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount = _totalAmount - withdrawal;
		_displayTimestamp();
		std::cout <<" index:" <<_accountIndex <<";p_amount:" << _amount<<";withdrawal:"<<withdrawal<<";amount:"<<_amount - withdrawal<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
		_amount = _amount - withdrawal;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout <<" index:" <<_accountIndex <<";p_amount:"<<_amount<<";withdrawal:refused"<<std::endl;
		return false;
	}
}

