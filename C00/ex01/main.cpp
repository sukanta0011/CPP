/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudas <sudas@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:14:17 by sudas             #+#    #+#             */
/*   Updated: 2025/10/17 13:14:17 by sudas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.hpp"

void	show_initial_msg()
{
	std::cout << "+---------------------------------------------------+" << std::endl;
	std::cout << "|      ADD      :: Save a new contact               |" << std::endl;
	std::cout << "|      SEARCH   :: Display a specific contact       |" << std::endl;
	std::cout << "|      EXIT     :: Quit                             |" << std::endl;
	std::cout << "+---------------------------------------------------+" << std::endl;

}

void	upper_case_word(char *str)
{
	for(int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
}

// void	collect_new_contact_info()
// {
// 	std::string	fname;
// 	std::string lname;
// 	std::string nick_name;
// 	std::string ph_num;
// 	std::string dark_secret;
// 	Contact new_contact;

// 	std::cout << "Enter your first name" << std::endl;
// 	std::cin >> fname;
// 	new_contact.add_first_name(fname);
// 	std::cout << "Enter your last name" << std::endl;
// 	std::cin >> lname;
// 	new_contact.add_last_name(lname);
// 	std::cout << "Enter your nick name" << std::endl;
// 	std::cin >> nick_name;
// 	new_contact.add_nick_name(nick_name);
// 	std::cout << "Enter your phone number" << std::endl;
// 	std::cin >> ph_num;
// 	new_contact.add_phone_num(ph_num);
// 	std::cout << "Enter any dark secret" << std::endl;
// 	std::cin >> dark_secret;
// 	new_contact.add_dark_secret(dark_secret);
// 	std::cout << "New contact is added" <<std::endl;
// 	handle_user_input();
// }

void	handle_user_input(PhoneBook phBook)
{
	std::string	user_input;
	
	while (true)
	{
		std::cin >> user_input;
		upper_case_word(&user_input[0]);
		if ((user_input.compare("ADD") == 0))
			phBook.addNewContact();
		else if (!strcmp("SEARCH", &user_input[0]))
			std::cout << "SEARCH is typed" << std::endl;
		else if (!strcmp("EXIT", &user_input[0]))
			break;
	}
}

int	main(void)
{
	PhoneBook	phBook;
	show_initial_msg();
	handle_user_input(phBook);

	return (0);
}