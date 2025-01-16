
#pragma once
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		const Weapon *weapon;
		HumanB();
		HumanB(HumanB const &src);
		HumanB& operator=(HumanB const & other);
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon *weapon);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon const &src_weapon);
};
