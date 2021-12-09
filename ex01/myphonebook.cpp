/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:44:22 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/07 17:44:25 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myphonebook.hpp"

Phonebook::Phonebook(void) {

    char command[1024];

    std::cout <<"please enter : ADD, SEARCH OR EXIT\n";
    std::cin >> command;
    return ;
}

Phonebook::~Phonebook(void) {
    
    return ;
}

int main()
{
  //  char command[1024];
    Phonebook myphb;

  /*  std::cout <<"please enter : ADD, SEARCH OR EXIT\n";
    std::cin >> command;
    while (ft_strcmp(command, (char *)"ADD") != 0 && ft_strcmp(command, (char *)"SEARCH") != 0 && ft_strcmp(command, (char*)"EXIT") != 0)
    {
        std::cout <<"please enter : ADD, SEARCH OR EXIT\n";
        std::cin >> command;
    }
    if (ft_strcmp(command, (char*)"EXIT") == 0)
        return 0;*/
    

}