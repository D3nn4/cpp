#ifndef __HOSTNAME_H__
#define __HOSTNAME_H__
#include "ImonitorModule.hpp"


class HostName : public Imodule
{
	private:
		std::string _hostname;
		
	public:
		HostName();
		HostName(HostName const &src);
		~HostName();
		HostName &operator=(HostName const &src);	

		void update() const;
		const HostName *getModule() const;
		std::string getVar() const;
		
};



#endif // __HOSTNAME_H__