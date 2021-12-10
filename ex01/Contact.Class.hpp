/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:47:01 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/10 14:47:16 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYPHONEBOOK_H
# define MYPHONEBOOK_H

#include <iostream>
#include <stdio.h>
#include <string>

int contact_num;

class Contact{

    private:

    int index;
   
    public :

    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;


    Contact(void);
    ~Contact(void);

    void add(void);

};


#endif