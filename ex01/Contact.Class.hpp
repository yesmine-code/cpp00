/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <ybesbes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 00:18:25 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/11 00:18:28 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include<iostream>
#include<string>

class Contact{
	
	private:

	public:

	int index;
	std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

	Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret){
		this->index = index;
		this->firstName = firstName;
		this->lastName = lastName;
		this->nickName = nickName;
		this->phoneNumber = phoneNumber;
		this->darkestSecret = darkestSecret;
	};
	~Contact(void){
		return;
	};

};

#endif