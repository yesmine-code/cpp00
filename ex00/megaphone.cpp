/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybesbes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:04:24 by ybesbes           #+#    #+#             */
/*   Updated: 2021/12/07 16:04:46 by ybesbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    int i;
    char ch;

    i = 1;
    while (av[i])
    {
        while(*av[i] != '\0')
        {
            if (isalpha(*av[i]))
                ch = toupper(*av[i]);
            else
                ch = *av[i];
            std::cout <<ch;
            av[i]++;
        }
        i++;
    }
    std::cout <<"\n";
    return 0;
}