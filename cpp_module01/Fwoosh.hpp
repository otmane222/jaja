#pragma once

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	private:
		/* data */
	public:
		Fwoosh(/* args */);
		Fwoosh(const std::string& name, const std::string& effects);
		~Fwoosh();

		ASpell*	clone() const;
};
