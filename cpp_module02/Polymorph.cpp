#include "Polymorph.hpp"

Polymorph::Polymorph(const std::string& name, const std::string& effects) : ASpell(name, effects) {}

Polymorph::Polymorph(/* args */)
{
	name = "Polymorph";
	effects = "turned into a critter";
}

Polymorph::~Polymorph()
{
}


ASpell*	Polymorph::clone() const
{
	return (new Polymorph());
}