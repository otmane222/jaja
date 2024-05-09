#include "Fireball.hpp"

Fireball::Fireball(const std::string& name, const std::string& effects) : ASpell(name, effects) {}

Fireball::Fireball(/* args */)
{
	name = "Fireball";
	effects = "burnt to a crisp";
}

Fireball::~Fireball()
{
}


ASpell*	Fireball::clone() const
{
	return (new Fireball());
}