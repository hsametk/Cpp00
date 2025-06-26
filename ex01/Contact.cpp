/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:45:12 by hakotu            #+#    #+#             */
/*   Updated: 2025/06/26 15:57:47 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool Contact::set_first_name()
{
    std::cout << "Enter First Name:" << std::endl;
    std::getline(std::cin, FirstName);
    if (std::cin.eof())
        return false;
    return !FirstName.empty();
}

bool Contact::set_last_name()
{
    std::cout << "Enter Last Name:" << std::endl;
    std::getline(std::cin, LastName);
    if (std::cin.eof())
        return false;
    return !LastName.empty();
    
}

bool Contact::set_nick_name()
{
    std::cout << "Enter Nick Name:" << std::endl;
    std::getline(std::cin, NickName);
    if (std::cin.eof())
        return false;
    return !NickName.empty();
}

bool Contact::set_phone_number()
{
    std::cout << "Enter Phone Number:" << std::endl;
    std::getline(std::cin, PhoneNumber);
    if (std::cin.eof())
        return false;
    return !PhoneNumber.empty();
}

bool Contact::set_darkest_secret()
{
    std::cout << "Enter Darkest Secret:" << std::endl;
    std::getline(std::cin, DarkestSecret);
    if (std::cin.eof())
        return false;
    return !DarkestSecret.empty();
}

std::string Contact::get_first_name()
{
    return FirstName;
}

std::string Contact::get_last_name()
{
    return LastName;
}

std::string Contact::get_nick_name()
{
    return NickName;
}

std::string Contact::get_phone_number()
{
    return PhoneNumber;
}

std::string Contact::get_darkest_secret()
{
    return DarkestSecret;
}

//TODO: input un boş olup olmadığını kontrol et