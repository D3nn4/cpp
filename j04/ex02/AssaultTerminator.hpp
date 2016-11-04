#ifndef __ASSAULTTERMINATOR_H__
#define __ASSAULTTERMINATOR_H__

class AssaultTerminator : public ISpaceMarine
{	
	private:

	protected:

	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &src);
		AssaultTerminator &operator=(AssaultTerminator const &src);
		~AssaultTerminator();
			
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

std::ostream &operator<<(std::ostream &o, AssaultTerminator const &marine);

#endif // __ASSAULTTERMINATOR_H__