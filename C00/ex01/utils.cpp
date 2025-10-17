/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudas <sudas@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:41:02 by sudas             #+#    #+#             */
/*   Updated: 2025/10/17 13:41:02 by sudas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "main_header.hpp"

int	is_str_alpha(std::string const str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!is_alpha(str[i]))
			return (0);
	}
	return (1);
}

int	is_str_num(std::string const str)
{
	int	start = 0;

	if (str[0] == '+')
		start++;
	for (int i = start; str[i]; i++)
	{
		if (!is_num(str[i]))
			return (0);
	}
	return (1);
}

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_num(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}