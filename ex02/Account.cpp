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

Account::Account(int initial_deposit){

	this->_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout <<" index:" <<_accountIndex <<";amount:" << _amount <<";created" << std::endl;
	_nbAccounts++;
}

Account::~Account(){

	_displayTimestamp();
	std::cout <<" index:" <<_accountIndex <<";amount:" << _amount <<";closed" << std::endl;
}

void Account::_displayTimestamp(){
	time_t tt;
    time( &tt );
    tm TM = *localtime( &tt );

	//Must add 1 to month and 1900 to the year
    int month=TM.tm_mon+1;
    int day=TM.tm_mday;
    int year=TM.tm_year+1900;
	std::cout <<"["<<year<<month<<day<<"_" <<TM.tm_hour<<TM.tm_min<<TM.tm_sec<<"]";

}
