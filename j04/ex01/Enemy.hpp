#ifndef __ENEMY_H__
#define __ENEMY_H__
#include <string>

class Enemy
{
	private:

	protected:
		Enemy();
		int _HP;
		std::string _type;
		
	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &src);
		virtual ~Enemy();
		Enemy &operator=(Enemy const &src);

		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
};


std::ostream &operator<<(std::ostream &o, Enemy const &enemy);

#endif // __ENEMY_H__