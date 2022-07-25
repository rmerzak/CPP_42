/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:34:24 by rmerzak           #+#    #+#             */
/*   Updated: 2022/07/25 21:40:00 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp";

Contact:: Contact(std::string firstname , std::string lastname, std::string nickname, std::string darksecret, int number)
{
    FirstName = firstname;
    LastName = lastname;
    NickName = nickname;
    DarkSecret = darksecret;
    Number = number;
}
Contact::~Contact ()
{
    std::cout << "a contact has been deleted";
}
void Contact::setFirstName(std::string FirstName)
{
    this->FirstName = FirstName;
}
void Contact::setLastName(std::string LastName)
{
    this->LastName = LastName;
}
void Contact::setNickName(std::string NickName)
{
    this->NickName = NickName;
}
void Contact::setDarkSecret(std::string DarkSecret)
{
    this->DarkSecret = DarkSecret;
}
void Contact::setNumber(int Number)
{
    this->Number = Number;
}
std::string Contact::getFirstName()
{
    return FirstName;
}
std::string Contact::getLastname()
{
    return LastName;
}
std::string Contact::getNickName()
{
    return NickName;
}
std::string Contact::getDarkSecret()
{
    return DarkSecret;
}
int Contact::getNumber()
{
    return Number;
} 