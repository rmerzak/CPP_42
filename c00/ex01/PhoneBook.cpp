/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:45:00 by rmerzak           #+#    #+#             */
/*   Updated: 2022/07/28 20:35:01 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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


    if (this->counter < 8)
    {
        members[this->counter].setFirstName(FirstName);
        members[this->counter].setLastName(LastName);
        members[this->counter].setNickName(NickName);
        members[this->counter].setDarkSecret(DarkSecret);
        members[this->counter].setNumber(Number);
        this->counter++;
    }
    else if (this->counter == 8)
    {
         members[0].setFirstName(FirstName);
        members[0].setLastName(LastName);
        members[0].setNickName(NickName);
        members[0].setDarkSecret(DarkSecret);
        members[0].setNumber(Number);
    }
}

void PhoneBook::DISPLAY()
{
    int i;

    i = 0;
    
    std::cout << "Displaying the saved contacts"<<std::endl;
    while (i < this->counter)
    {
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
}




