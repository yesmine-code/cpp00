/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <ybesbes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 00:34:40 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/11 00:34:44 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.Class.hpp"

Phonebook::Phonebook(void){
    contactNum = 0;
	return ;
}

Phonebook::~Phonebook(void){
	return ;
}

void Phonebook::printfContactByIndex(int index){
   
    std::cout <<contacts[index].getFirstName() <<std::endl;
    std::cout <<contacts[index].getLastName() <<std::endl;
    std::cout <<contacts[index].getNickName() <<std::endl;
    std::cout <<contacts[index].getPhoneNumber() <<std::endl;
    std::cout <<contacts[index].getDarkestSecret() <<std::endl;
}

void Phonebook::printname(std::string name)
{
    int len;
    int i;

    i = 0;
    len = name.length();
    if (len > 10)
    {
        name[9] = '.';
        name.erase(10);
        std::cout <<name <<"|";
    }
    else if (len < 10)
    {
        while (i < 10 - len)
        {
        std::cout << " ";
        i++;
        }
        std::cout <<name <<"|";
    }
    else
        std::cout <<name <<"|";
}

void Phonebook::printAllContacts(void){
    int i;

    i = 0;
    std::cout <<"--------------------------------------------" <<std::endl;
    std::cout <<"|     index| firstname|  lastname|  nickname|" <<std::endl;
    std::cout <<"--------------------------------------------" <<std::endl;
    while (i < contactNum)
    {
        std::cout <<"|         " <<i <<"|";
        printname(contacts[i].getFirstName());
        printname(contacts[i].getLastName());
        printname(contacts[i].getNickName());
        std::cout <<std::endl;
        i++; 
    }
    if (i != 0)
        std::cout <<"--------------------------------------------" <<std::endl;  
}

void Phonebook::start(void){

    std::string command;
    std::string tmp;
    int i;


    while (1)
    {
      std::cout <<"please enter : ADD, SEARCH OR EXIT" <<std::endl;
      std::cin >> command;
      if (command.compare("ADD") == 0)
      {
        if (contactNum == CONTACT_MAX)
             std::cout <<"sorry!! no more than " <<CONTACT_MAX <<" contacts in this phonebook"<<std::endl;
		else
	        createContact(contactNum);
      }
      else if (command.compare("SEARCH") == 0)
      {
        printAllContacts();
        if (contactNum > 0)
        {
            std::cout <<"please enter the index of contact you want :" <<std::endl;
            std::cin >> tmp;
            if (tmp.length() == 1)
            {
                i = tmp[0] - '0';
                if (i >= 0 && i < contactNum)
                    printfContactByIndex(i);
                else
                    std::cout <<"sorry this index can't be found" <<std::endl;

            }
            else
                std::cout <<"sorry this index can't be found" <<std::endl;
        }
      }
      else if (command.compare("EXIT") == 0)
        break;
    }
}

void Phonebook::createContact(int index){

	std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout <<"please enter FirstName:" <<std::endl ;
    std::cin >>firstName;
    
    std::cout <<"please enter LastName:" <<std::endl ;
    std::cin >>lastName;

    std::cout <<"please enter NickName:" <<std::endl ;
    std::cin >>nickName;

    std::cout <<"please enter Phonenumber:" <<std::endl ;
    std::cin >>phoneNumber;

    std::cout <<"please enter DarkestSecret(shh ;) ):" <<std::endl ;
    std::cin >>darkestSecret;

	contacts[index] = Contact();
	contacts[index].setFirstName(firstName);
	contacts[index].setLastName(lastName);
	contacts[index].setNickName(nickName);
	contacts[index].setPhoneNumber(phoneNumber);
	contacts[index].setDarkestSecret(darkestSecret);
	contactNum++;
};

int main(void)
{
	Phonebook phone;
	phone.start();
	return 0;
}