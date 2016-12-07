#ifndef __USERNAME_H__
#define __USERNAME_H__
#include "ImonitorModule.hpp"

class UserName : public Imodule
{
	private:
		std::string _username;
		
	public:
		UserName();
		UserName(UserName const &src);
		~UserName();
		UserName &operator=(UserName const &src);	

		void update() const;
		const UserName *getModule()const;
		std::string getVar() const;
};



#endif // __USERNAME_H__