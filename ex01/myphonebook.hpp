/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:11:33 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/09 16:11:36 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYPHONEBOOK_H
# define MYPHONEBOOK_H

#include <iostream>
#include <stdio.h>
#include <string>

class Contact{

    private:

    char *darkestSecret;
    char *phoneNumber;
   
    public :

    char *firstName;
    char *lastName;
    char *nickName;

    Contact(char *firstName, char *lastName, char *nickName, char *phoneNumber, char *darkestSecret);
    ~Contact(void);


};

class Phonebook{

    public :

    Contact c1;
    Contact c2;
    Contact c3;
    Contact c4;
    Contact c5;
    Contact c6;
    Contact c7;
    Contact c8;

    Phonebook(void);
    ~Phonebook(void);


};


#endif