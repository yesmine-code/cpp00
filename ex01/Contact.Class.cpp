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