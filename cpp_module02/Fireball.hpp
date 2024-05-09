#pragma once

#include "ASpell.hpp"

class Fireball : public ASpell
{
	private:
		/* data */
	public:
		Fireball(/* args */);
		Fireball(const std::string& name, const std::string& effects);
		~Fireball();

		ASpell*	clone() const;
};
