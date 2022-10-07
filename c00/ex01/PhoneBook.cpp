/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:45:00 by rmerzak           #+#    #+#             */
/*   Updated: 2022/10/07 21:30:53 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdlib.h>
#include <iomanip>

int ipow(int base, int exp)
{
    int result = 1;
    for (;;)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }

    return result;
}

int charToDigit(char ch) {
    switch (ch) {
        case '0':
            return 0;
            break;
       case '1':
            return 1;
            break;
        case '2':
            return 2;
            break;
        case '3':
            return 3;
            break;
        case '4':
            return 4;
            break;
        case '5':
            return 5;
            break;
        case '6':
            return 6;
            break;
        case '7':
            return 7;
            break;
        case '8':
            return 8;
            break;
        case '9':
            return 9;
            break;
        default:
            throw "0-9";
            break;
    }
};

int ft_stoi(const char* string) {
    int basenum = 0;
    int pos = ipow(10, strlen(string)-1);
    const int len = strlen(string);
    for (int i = 0; i<len; i++) {
        basenum += charToDigit(string[i])*pos;
        pos /= 10;
    };
    return basenum;
};




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
    std::cout << "_____________________________________________"<< std::endl;
    std::cout << "|   index  |  name    | lastName | nickName |"<< std::endl;
    while (i < this->counter)
    {
        std::cout << "|" << i + 1 << std::setw(10);
        members[i].to_string();
        i++;
    }
    std::cout << std::endl << std::endl;
}

void PhoneBook::SEARCH()
{
    int i;
    std::string input;

    DISPLAY();
    i = -1;
    std::cout << "enter the id to look for i = ";
    std::cin >> input;
    if (input.length() >= 2 || input[0] == '9')
    {
        return ;
    }
    try {
        i = stoi(input);
    }
    catch (...)
    {
        std::cout<<"Conversion failure"<<std::endl;
    }
    if (i > 0 && i < 9)
    {
        std::cout << "FirstName: " << members[i - 1].getFirstName()<<std::endl;
        std::cout << "Lastname: " << members[i - 1].getLastname()<<std::endl;
        std::cout << "NickName: " << members[i - 1].getNickName()<<std::endl;
        std::cout << "DarkSecret: " << members[i - 1].getDarkSecret()<<std::endl;
        std::cout << "Number: " << members[i - 1].getNumber()<<std::endl;
    }
    else {
        std::cout << "Error index not valid";
       return ;
    }
}


