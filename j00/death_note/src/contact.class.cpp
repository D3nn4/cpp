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

int Contact::getTotalInfo()
{
	return 11;
}

std::string Contact::getKey(int i) const
{
	if (0 < i && i < TOTAL_INFOS)
		return Contact::_keys[i];
	return "";
}

void Contact::setInfos(std::string info, int i)
{
	if (0 < i && i < TOTAL_INFOS)
		_contact_infos[i] = info;
}

std::string Contact::getInfos(int i) const
{
	if (0 < i && i < TOTAL_INFOS)	
		return _contact_infos[i];
	return "";
}
