#ifndef MAIN_HEADER_HDD
# define MAIN_HEADER_HDD

#include <iostream>
#include <string>
#include <cstring>

# define LST_SIZE 8

class Contact
{
	private:
		std::string	_fname;
		std::string _lname;
		std::string _nick_name;
		std::string _ph_num;
		std::string _dark_secret;
	public:
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getSecret();
		void		add_first_name(std::string str);
		void		add_last_name(std::string str);
		void		add_nick_name(std::string str);
		void		add_phone_num(std::string str);
		void		add_dark_secret(std::string str);
};

class PhoneBook
{
	private:
		int		_index = -1;
		int		_totalContacts = 0;
		Contact _contact[LST_SIZE];
		void	_incrementIndex();
		void	_incrementTotalContracts();
		void	_diplayLastAddedContact();
	public:
		bool	addNewContact();
		bool	searchContact(int index);
		bool	displayContact(int index);		
};

// ##-------------utils------------------##//
int	is_str_alpha(std::string const str);
int	is_str_num(std::string const str);
int	is_alpha(char c);
int	is_num(char c);

// ##-------------main------------------##//
void	handle_user_input();

#endif