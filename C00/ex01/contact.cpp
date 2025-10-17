/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudas <sudas@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:14:21 by sudas             #+#    #+#             */
/*   Updated: 2025/10/17 13:14:21 by sudas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.hpp"


std::string Contact::getFirstName()
{
	return (_fname);
}

std::string Contact::getLastName()
{
	return (_lname);
}

std::string Contact::getNickName()
{
	return (_nick_name);
}

std::string Contact::getPhoneNumber()
{
	return (_ph_num);
}

std::string Contact::getSecret()
{
	return (_dark_secret);
}

void Contact::add_first_name(std::string str)
{
	if (is_str_alpha(str))
		this->_fname = str;
	else
	{
		std::cout << "Name is non-alphabatic, enter again" << std::endl;
		std:: cin >> str;
		add_first_name(str);
	}
}

void Contact::add_last_name(std::string str)
{
	if (is_str_alpha(str))
		this->_lname = str;
	else
	{
		std::cout << "Name is non-alphabatic, enter again" << std::endl;
		std:: cin >> str;
		add_last_name(str);
	}
}

void Contact::add_nick_name(std::string str)
{
	this->_nick_name = str;
}

void Contact::add_phone_num(std::string str)
{
	if (is_str_num(str))
		this->_ph_num = str;
	else
	{
		std::cout << "Number is not-numeric, enter again" << std::endl;
		std:: cin >> str;
		add_phone_num(str);
	}
}

void Contact::add_dark_secret(std::string str)
{
	this->_dark_secret = str;
}
