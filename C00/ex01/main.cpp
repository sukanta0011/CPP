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
			phBook.searchContact();
		else if (!strcmp("EXIT", &user_input[0]))
			break;
		else
			std::cout << "Invalid input, try again" << std::endl;
	}
}

int	main(void)
{
	PhoneBook	phBook;
	show_initial_msg();
	handle_user_input(phBook);

	return (0);
}