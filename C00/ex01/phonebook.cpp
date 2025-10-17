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

bool	PhoneBook::addNewContact()
{
	_incrementIndex();
	_incrementTotalContracts();
	std::string	input;

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

bool	PhoneBook::displayContact(int index)
{
	if (index >= 0 && index < _totalContacts - 1)
	{
		std::cout << "|Index     |First Name|Last Name |Nick Name |";
		std::cout << index;
		std::cout << this->_contact[index].getFirstName();
		std::cout << this->_contact[index].getLastName();
		std::cout << this->_contact[index].getNickName();
	}
	return (false);
}