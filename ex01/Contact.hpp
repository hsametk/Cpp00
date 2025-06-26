/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42istanbul.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:50:43 by hakotu            #+#    #+#             */
/*   Updated: 2025/06/23 18:03:07 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT.HPP
#define CONTACT.HPP

#include <string>
#include <iostream>

class Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    int PhoneNumber; 
    std::string DarkestSecret;
    
public:
	void set_first_name()
	{
		std::cout << "Enter First Name:" << std::endl;
		getline(std::cin, FirstName);
		if (std::cin.eof())
			return ;
	}
	
	void set_last_name()
	{
		std::cout << "Enter Last Name:" << std::endl;
		getline(std::cin, LastName);
		if (std::cin.eof())
			return ;
	}
	
	void set_nick_name()
	{
		std::cout << "Enter Nick Name:" << std::endl;
		getline(std::cin, NickName);
		if (std::cin.eof())
			return ;
	}
	
	void set_phone_number()
	{
        std::string input;
		std::cout << "Enter Phone Number:" << std::endl;
		getline(std::cin, input);
		if (std::cin.eof())
			return ;
		PhoneNumber = atoi(input.c_str());
	}
	
	void set_first_name()
	{
		std::cout << "Enter Darkest Secret:" << std::endl;
		getline(std::cin, DarkestSecret);
		if (std::cin.eof())
			return ;
	}
    std::string get_first_name()
    {
        return FirstName;
    }
    std::string	get_last_name()
    {
        return LastName;
    }
    std::string	get_nick_name()
    {
        return NickName;
    }
    
    int	get_phone_number()
    {
        return PhoneNumber;
    }
    
	std::string get_darkest_secret()
    {
        return DarkestSecret;
    }
};
#endif