#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() {}

ATarget::~ATarget() {}
ATarget::ATarget(std::string type) : type(type) {}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

const std::string& ATarget::getType() const
{
	return (type);
}


ATarget::ATarget(const ATarget& other)
{
	type = other.type;
}

ATarget& ATarget::operator=(const ATarget& other)
{
	type = other.getType();
	return (*this);
}