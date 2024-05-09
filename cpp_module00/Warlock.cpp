#include "Warlock.hpp"

Warlock::Warlock(const Warlock& cpy)
{
	*this = cpy;
}

Warlock& Warlock::operator = (const Warlock& cpy)
{
	name = cpy.name;
	title = cpy.title;
	return (*this);
}


Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::Warlock() {}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" <<std::endl;
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