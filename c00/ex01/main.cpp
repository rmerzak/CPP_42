/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:07:32 by rmerzak           #+#    #+#             */
/*   Updated: 2022/08/29 19:00:44 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

#include <string>


int main()
{
    PhoneBook           phone;
    std::string         choix;
    while(1)
    {
        std::cout << "Menu:" <<std::endl;
        std::cout << "    to add a new contact enter ADD" <<std::endl;
        std::cout << "    to shearch a contact enter SEARCH" <<std::endl;
        std::cout << "    to exit(0) a contact enter EXIT" <<std::endl;
        std::cout << "chose = ";
        getline(std::cin, choix);
        if (std::cin.good() == false)
            exit(0);
        while(choix.length() == 0)
        {
            getline(std::cin, choix);
            if (choix.length() == 0)
                continue ;
            if (std::cin.good() == false)
                exit(0);
        }
        if (!choix.compare("ADD"))
            phone.ADD();
        if (!choix.compare("SEARCH"))
            phone.SEARCH();
        if (!choix.compare("EXIT"))
            break ;
    }
}