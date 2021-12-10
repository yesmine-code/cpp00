/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:45:57 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/10 14:46:08 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::~Contact(void)
{
    std::cout <<"thank you!!" <<std::endl ;
    return ;
}

Contact::Contact(void)
{
    std::string tmp;

    std::cout <<"please enter FirstName:" <<std::endl ;
    std::cin >>tmp;
    this->firstName = tmp;
    
    std::cout <<"please enter LastName:" <<std::endl ;
    std::cin >>tmp;
    this->lastName = tmp;

    std::cout <<"please enter NickName:" <<std::endl ;
    std::cin >>tmp;
    this->nickName = tmp;


    std::cout <<"please enter Phonenumber:" <<std::endl ;
    std::cin >>tmp;
    this->phoneNumber = tmp;


    std::cout <<"please enter DarkestSecret(shh ;) ):" <<std::endl ;
    std::cin >>tmp;
    this->darkestSecret = tmp;
}


int main()
{
    std::string command;
    
    contact_num = 0;
    while (1)
    {
      std::cout <<"please enter : ADD, SEARCH OR EXIT" <<std::endl;
      std::cin >> command;
      if (command.compare("ADD") == 0)
      {
        if (contact_num >= 8)
        {
            std::cout <<"sorry!! no more than 8 contacta in this phonebook"<<std::endl;
            continue ;
        }
        Contact person;
        contact_num++;
      }
      if (command.compare("SEARCH") == 0)
      {
        break ;
      }
      if (command.compare("EXIT") == 0)
        break;
      else
        continue;

    }
    return 0;
    
}