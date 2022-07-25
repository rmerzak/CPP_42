/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:51:07 by rmerzak           #+#    #+#             */
/*   Updated: 2022/07/25 21:46:42 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string DarkSecret;
        int         Number;
    public:
        Contact(std::string firstname, std::string lastname, std::string nickname, std::string darksecret, int number);
        Contact ();
        ~Contact ();
        void setFirstName(std::string FirstName);
        void setLastName(std::string LastName);
        void setNickName(std::string NickName);
        void setDarkSecret(std::string DarkSecret);
        void setNumber(int Number);
        std::string getFirstName();
        std::string getLastname();
        std::string getNickName();
        std::string getDarkSecret();
        int getNumber();
};