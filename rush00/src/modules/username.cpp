#include <string>
#include <unistd.h>

#include "ImonitorModule.hpp"
#include "username.hpp"

UserName::UserName()
{
	_username = getlogin();
}

UserName::UserName(UserName const &src)
{
	*this = src;
}

UserName::~UserName(){}

UserName &UserName::operator=(UserName const &src)
{
	if (this != &src) {
	_username = src.getVar();
	}
	return *this;
}	

void UserName::update() const{}

const UserName *UserName::getModule() const
{
	return this;
}

std::string UserName::getVar() const
{
	return _username;
}