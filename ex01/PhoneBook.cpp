/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:40:02 by hakotu            #+#    #+#             */
/*   Updated: 2025/06/26 18:04:51 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() 
{
    this->index = 0;
    this->consts = 0;
}

bool PhoneBook::add()
{
    Contact newContact;
    while (!newContact.set_first_name())
        std::cout << "First Name cannot be empty!" << std::endl;
    while (!newContact.set_last_name())
        std::cout << "Last Name cannot be empty!" << std::endl;
    while (!newContact.set_nick_name())
        std::cout << "Nick Name cannot be empty!" << std::endl;
    while (!newContact.set_phone_number())
        std::cout << "Phone Number cannot be empty!" << std::endl;
    while (!newContact.set_darkest_secret())
        std::cout << "Darkest Secret cannot be empty!" << std::endl;
    this->ContactArry[this->index] = newContact;
    this->index = (this->index + 1) % 8;
    if (this->consts < 8)
        this->consts++;
    std::cout << "Contact added." << std::endl;
    return true;
}
std::string set_format(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}
bool PhoneBook::search()
{
    Contact newcontact;
    if (this->consts == 0)
    {
        std::cout << "No contacts to display" << std::endl;
        return false;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|   Index  |First Name| Last Name| Nick Name|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0; i < this->consts; i++)
    {
        std::cout << "|" << std::setw(10) << i
                  << "|" << std::setw(10) << set_format(this->ContactArry[i].get_first_name())
                  << "|" << std::setw(10) << set_format(this->ContactArry[i].get_last_name())
                  << "|" << std::setw(10) << set_format(this->ContactArry[i].get_nick_name())
                  << "|" << std::endl;
         
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    
    return true;
    
}

bool PhoneBook::exit()
{
    std::cout << "See you later" << std::endl;
    return (0);
}