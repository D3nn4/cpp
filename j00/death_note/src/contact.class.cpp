#include <iostream>
#include "contact.class.hpp"

const std::string Contact::_keys [TOTAL_INFOS] = {
	"first name",
	"last name",
	"nickname",
	"login",
	"postal adress",
	"email adress",
	"phone number",
	"birthday",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

Contact::Contact(void){}

Contact::~Contact(void){}

std::string Contact::getKey(int i) const
{
	return _keys[i];
}

void Contact::setInfos(std::string info, int i)
{
	_contact_infos[i] = info;
}

std::string Contact::getInfos(int i) const
{
	return _contact_infos[i];
}
