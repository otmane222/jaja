#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;

}
Warlock::Warlock() {}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" <<std::endl;
	// for (std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
	// 	delete it->second;
	// spells.clear();
}

const std::string& Warlock::getName() const
{
	return (name);
}

const std::string& Warlock::getTitle() const
{
	return (title);
}

void Warlock::introduce() const
{
	std::cout << name <<": I am "<<name<<", "<<title<<"!"<<std::endl;
}


void	Warlock::setTitle(const std::string& title)
{
	this->title = title;
}

void	Warlock::learnSpell(ASpell* spell)
{
	boko.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spellname)
{
	boko.forgetSpell(spellname);
}

void	Warlock::launchSpell(std::string spellname, const ATarget& target)
{
	if (boko.createSpell(spellname))
		boko.createSpell(spellname)->launch(target);
}


Warlock::Warlock(const Warlock& other)
{
	*this = other;
}

Warlock& Warlock::operator=(const Warlock& other)
{
	name = other.name;
	title = other.title;
	spells = other.spells;
	return (*this);
}
