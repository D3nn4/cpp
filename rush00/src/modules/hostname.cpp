#include <string>
#include <unistd.h>
#include <limits.h>

#include "ImonitorModule.hpp"
#include "hostname.hpp"

HostName::HostName()
{
	char *hostname = NULL;
	gethostname(hostname, HOST_NAME_MAX);
	_hostname = hostname;
}

HostName::HostName(HostName const &src)
{
	*this = src;
}

HostName::~HostName(){}

HostName &HostName::operator=(HostName const &src)
{
	if (this != &src) {
	_hostname = src.getVar();
	}
	return *this;
}	

void HostName::update() const{}

const HostName *HostName::getModule() const
{
	return this;
}

std::string HostName::getVar() const
{
	return _hostname;
}