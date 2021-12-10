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

    this->index = contact_num;
}

void printname(std::string name)
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

void  printContact(Contact *arr[])
{
  int i;
  int index;

  i = 0;
  std::cout <<"--------------------------------------------" <<std::endl;
  std::cout <<"|     index| firstname|  lastname|  nickname|" <<std::endl;
  std::cout <<"--------------------------------------------" <<std::endl;
  while (i < contact_num)
  {
    std::cout <<"|         " <<i <<"|";
    printname(arr[i]->firstName);
    printname(arr[i]->lastName);
    printname(arr[i]->nickName);
    std::cout <<std::endl;
    i++; 
  }
  if (i != 0)
  {
    std::cout <<"--------------------------------------------" <<std::endl;
    std::cout <<"please enter the index of contact you want :" <<std::endl;
    std::cin >> index;
    if (index >= 0 && index < contact_num)
    {
      std::cout <<arr[index]->firstName <<std::endl;
      std::cout <<arr[index]->lastName <<std::endl;
      std::cout <<arr[index]->nickName <<std::endl;
      std::cout <<arr[index]->phoneNumber <<std::endl;
      std::cout <<arr[index]->darkestSecret <<std::endl;
    }
    else
    {
      std::cout <<"sorry this index can't be found" <<std::endl;
      return ;
    }    
  }

}


int main()
{
    std::string command;
    contact_num = 0;

    Contact *arr[8];

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
        arr[contact_num] = new Contact;
        contact_num++;
      }
      if (command.compare("SEARCH") == 0)
      {
        printContact(arr);
      }
      if (command.compare("EXIT") == 0)
        break;
      else
        continue;

    }
    return 0;
    
}