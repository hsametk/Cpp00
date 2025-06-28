/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:44:01 by hakotu            #+#    #+#             */
/*   Updated: 2025/06/28 17:17:16 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string input;
    std::cout << "Welcome to my Phone Book" << std::endl;
    while (1)
    {
        std::cout << "Please type SEARCH, ADD, EXIT" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
			return (0);
        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
		{
			phonebook.exit();
			return (0);
		}
		else
			std::cout << "Please enter valid input" << std::endl;
    }
    return (0);
}