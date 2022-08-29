/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:45:00 by rmerzak           #+#    #+#             */
/*   Updated: 2022/08/29 20:42:07 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    this->counter = 0;
}

PhoneBook::~PhoneBook()
{
}


void PhoneBook::ADD()
{
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string DarkSecret;
    std::string Number;
    std::cout << "give the name = ";
    getline(std::cin, FirstName);
    if (std::cin.good() == false || FirstName.length() == 0)
        return ;
    std::cout << "give the LastName = ";
    getline(std::cin, LastName);
    if (std::cin.good() == false || LastName.length() == 0)
        return ;
    std::cout << "give the NickName = ";
    getline(std::cin, NickName);
    if (std::cin.good() == false || NickName.length() == 0)
        return ;
    std::cout << "give the DarkSecret = ";
    getline(std::cin, DarkSecret);
    if (std::cin.good() == false || DarkSecret.length() == 0)
        return ;
    std::cout << "give the Number = ";
    getline(std::cin, Number);
    if (std::cin.good() == false || Number.length() == 0)
        return ;
    int i = this->counter % 8;
    members[i].setFirstName(FirstName);
    members[i].setLastName(LastName);
    members[i].setNickName(NickName);
    members[i].setDarkSecret(DarkSecret);
    members[i].setNumber(Number);
    this->counter++;
}

void PhoneBook::DISPLAY()
{
    int i;

    i = 0;

    std::cout << "Displaying the saved contacts"<<std::endl;
    std::cout << "________________________________________________________"<< std::endl;
    std::cout << "|   index  |  name    | lastName | nickName |  number  |"<< std::endl;
    while (i < this->counter)
    {
        std::cout << "|" << i << std::setw(10);
        members[i].to_string();
        i++;
    }
    std::cout << std::endl << std::endl;
}

void PhoneBook::SEARCH()
{
    int i;

    DISPLAY();
    i = -1;
    std::cout << "enter the id to look for i = ";
    std::cin >> i;

    if (i > 0 && i < this->counter)
        members[i - 1].to_string();
    else {
        std::cout << "Error index not valid exit code(1)";
        exit(1);
    }
}




