#ifndef __TACTICALMARINE_H__
#define __TACTICALMARINE_H__

class TacticalMarine : public ISpaceMarine
{	
	private:

	protected:

	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const &src);
		TacticalMarine &operator=(TacticalMarine const &src);
		~TacticalMarine();
			
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

std::ostream &operator<<(std::ostream &o, TacticalMarine const &marine);

#endif // __TACTICALMARINE_H__