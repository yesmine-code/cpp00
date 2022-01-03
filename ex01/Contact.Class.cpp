/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <ybesbes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:54:28 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/13 11:54:29 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.Class.hpp"

std::string Contact::getFirstName(void){
	return(firstName);
}

std::string Contact::getLastName(void){
	return(lastName);
}

std::string Contact::getNickName(void){
	return(nickName);
}

std::string Contact::getPhoneNumber(void){
	return(phoneNumber);
}

std::string Contact::getDarkestSecret(void){
	return(darkestSecret);
}


void Contact::setFirstName(std::string firstName){
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName){
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName){
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber){
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret){
	this->darkestSecret = darkestSecret;
}
