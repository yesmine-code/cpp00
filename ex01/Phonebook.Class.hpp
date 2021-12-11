/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <ybesbes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 00:30:46 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/11 00:30:49 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.Class.hpp"
#include <iostream>
#include <string>

int const CONTACT_MAX = 8;

class Phonebook
{
private:
public:
	Contact *contacts[CONTACT_MAX];
	int contactNum;

	Phonebook();
	~Phonebook();

	void start(void);
	Contact *createContact(int index);
	Contact *searchContact(int index);
	bool addContact(Contact *c);
	void printAllContacts(void);
	void printname(std::string name);
	void printfContactByIndex(int index);

};

#endif