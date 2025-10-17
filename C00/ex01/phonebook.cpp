#include "main_header.hpp"

void	PhoneBook::_incrementIndex()
{
	this->_index = ((this->_index + 1) % LST_SIZE);
}

void	PhoneBook::_incrementTotalContracts()
{
	if (_totalContacts <= LST_SIZE)
		_totalContacts++;
	else
		std::cout << "PhoneBook is full, replacing the oldest contact";
}

void PhoneBook::_diplayLastAddedContact()
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "First Name: " << this->_contact[_index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->_contact[_index].getLastName() << std::endl;
	std::cout << "Nick Name: " << this->_contact[_index].getNickName() << std::endl;
	std::cout << "Phone Number: " << this->_contact[_index].getPhoneNumber() << std::endl;
	std::cout << "Secret: " << this->_contact[_index].getSecret() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
}

std::string	PhoneBook::_trimString(std::string str)
{
	int			str_len;
	int			max_len = 10;
	std::string	new_str;

	str_len = str.length();
	if (str_len < max_len)
	{
		new_str = str;
		new_str.insert(str_len, max_len - str_len, ' ');
	}
	else if (str_len > max_len)
	{
		new_str = str.substr(0, 9);
		new_str.insert(9, 1, '.');
	}
	return (new_str);
}

bool	PhoneBook::addNewContact()
{
	std::string	input;

	_incrementIndex();
	_incrementTotalContracts();
	std::cout << "Enter first name" << std::endl;
	std::cin >> input;
	this->_contact[_index].add_first_name(input);
	std::cout << "Enter last name" << std::endl;
	std::cin >> input;
	this->_contact[_index].add_last_name(input);
	std::cout << "Enter nick name" << std::endl;
	std::cin >> input;
	this->_contact[_index].add_nick_name(input);
	std::cout << "Enter phone number" << std::endl;
	std::cin >> input;
	this->_contact[_index].add_phone_num(input);
	std::cout << "Enter any dark secret" << std::endl;
	std::cin >> input;
	this->_contact[_index].add_dark_secret(input);
	std::cout << "New contact is added" <<std::endl;
	_diplayLastAddedContact();
	return (true);
}

bool	PhoneBook::searchContact()
{
	int	index;

	if (this->_index == -1)
		std::cout << "PhoneBook is empty." << std::endl;
	else
	{
		std::cout << "Provide the index between 0 to " << _totalContacts - 1 <<std::endl;
		std::cin >> index;
		if (index >= 0 && index < _totalContacts)
			displayContact(index);
		else
			std::cout << "Index is wrong" << std::endl;
	}
	return (true);
}

bool	PhoneBook::displayContact(int index)
{
	std::cout << "|Index     |First Name|Last Name |Nick Name |" << std::endl;
	std::cout <<"|" << index << "         " << "|";
	std::cout << _trimString(this->_contact[index].getFirstName()) << "|";
	std::cout << _trimString(this->_contact[index].getLastName()) << "|";
	std::cout << _trimString(this->_contact[index].getNickName()) << "|" <<std::endl;
	return (false);
}