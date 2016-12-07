#ifndef __GKRELLM_H__
#define __GKRELLM_H__
#include <vector>
#include "ImonitorModule.hpp"
//#include "ImonitorDisplay.hpp"

class GKrellM
{
	private:

		std::vector(IMonitorModule *)  _modules;
		//IMonitorDisplay *_display;

	public:
		GKrellM();
		GKrellM(GKrellM const &src);
		~GKrellM();
		GKrellM &operator=(GKrellM const &src);	

		void update() const;
		void addModule();
		
};



#endif // __GKRELLM_H__