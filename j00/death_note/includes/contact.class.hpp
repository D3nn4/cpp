#ifndef __CONTACT_CLASS__
#define __CONTACT_CLASS__
#include <string>
#define TOTAL_INFOS 11

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string getKey(int i) const;
		void setInfos(std::string info, int i);

	private:
		static const std::string _keys [];
		std::string _contact_infos[TOTAL_INFOS];		
};



#endif // __CONTACT_CLASS__