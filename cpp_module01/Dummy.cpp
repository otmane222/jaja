#include "Dummy.hpp"

Dummy::Dummy(std::string type) : ATarget(type) {}
Dummy::Dummy()
{
	std::string& a = const_cast<std::string &>(getType());
	a = "Target Practice Dummy";
}

Dummy::~Dummy() {}

ATarget*	Dummy::clone() const
{
	return (new Dummy());
}