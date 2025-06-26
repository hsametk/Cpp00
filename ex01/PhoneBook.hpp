/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:06:48 by hakotu            #+#    #+#             */
/*   Updated: 2025/06/26 15:56:01 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
	private:
		Contact ContactArry[8];
		int		index;
		int		consts;
		
	public:
		PhoneBook();
		bool add();
		bool search();
		bool exit();
};


#endif
