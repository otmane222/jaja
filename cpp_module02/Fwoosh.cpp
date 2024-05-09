#include "Fwoosh.hpp"

Fwoosh::Fwoosh(const std::string& name, const std::string& effects) : ASpell(name, effects) {}

Fwoosh::Fwoosh(/* args */)
{
	name = "Fwoosh";
	effects = "fwooshed";
}

Fwoosh::~Fwoosh()
{
}


ASpell*	Fwoosh::clone() const
{
	return (new Fwoosh());
}