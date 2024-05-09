#pragma once

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	private:
		/* data */
	public:
		Polymorph(/* args */);
		Polymorph(const std::string& name, const std::string& effects);
		~Polymorph();

		ASpell*	clone() const;
};
