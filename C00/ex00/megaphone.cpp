/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudas <sudas@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:32:25 by sudas             #+#    #+#             */
/*   Updated: 2025/10/16 20:32:25 by sudas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	char c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(int i = 1; i < argc; i++)
	{
		for(int j = 0; argv[i][j]; j++)
		{
			c = std::toupper(argv[i][j]);
			std::cout << c;
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}