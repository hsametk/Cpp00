/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:40:02 by hakotu            #+#    #+#             */
/*   Updated: 2025/06/27 18:41:23 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


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
    //Contact newcontact;
    std::string input;
    int idx;
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
    while (true)
    {
         std::cout << "Enter index of the contact to display (-1 to exit): ";
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Input cannot be empty." << std::endl;
            continue;
        }
        if (input == "-1")
            break;
        idx = atoi(input.c_str());
        if (idx == -1)
            break;
        if (idx >= 0 && idx < this->consts && !this->ContactArry[idx].get_first_name().empty())
        {
            std::cout << "First Name: " << this->ContactArry[idx].get_first_name() << std::endl;
            std::cout << "Last Name: " << this->ContactArry[idx].get_last_name() << std::endl;
            std::cout << "Nick Name: " << this->ContactArry[idx].get_nick_name() << std::endl;
            std::cout << "Phone Number: " << this->ContactArry[idx].get_phone_number() << std::endl;
            std::cout << "Darkest Secret: " << this->ContactArry[idx].get_darkest_secret() << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid index or empty contact. Please try again." << std::endl;
        }
    }
    
    return true;
    
}

bool PhoneBook::exit()
{
    std::cout << "See you later" << std::endl;
    return (0);
}