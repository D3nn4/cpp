#ifndef __IMONITORMODULE_H__
#define __IMONITORMODULE_H__


class Imodule
{
	private:
		
	public:
		
		virtual void 	update() const;
		virtual const Imodule *getModule() const;
		virtual std::string	getVar() const;
		
};



#endif // __IMONITORMODULE_H__