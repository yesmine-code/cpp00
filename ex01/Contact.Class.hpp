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

	std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

	public:
	
	std::string getFirstName(void);
	void setFirstName(std::string firstName);
	std::string getLastName(void);
	void setLastName(std::string lastName);
	std::string getNickName(void);
	void setNickName(std::string nickName);
	std::string getPhoneNumber(void);
	void setPhoneNumber(std::string phoneNumber);
	std::string getDarkestSecret(void);
	void setDarkestSecret(std::string darkestSecret);


	Contact(){
		return;
	};
	~Contact(void){
		return;
	};

};

#endif