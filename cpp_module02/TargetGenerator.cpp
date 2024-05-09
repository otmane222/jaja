#include "TargetGenerator.hpp"
#include "BrickWall.hpp"
#include "Dummy.hpp"

TargetGenerator::TargetGenerator(/* args */)
{
}

TargetGenerator::~TargetGenerator()
{
}

TargetGenerator::TargetGenerator(const TargetGenerator& cpy)
{
	*this = cpy;
}

TargetGenerator& TargetGenerator::operator =(const TargetGenerator& cpy)
{
	tar = cpy.tar;
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
	{
		if (tar.find(target->getType()) == tar.end())
			tar[target->getType()] = target;
	}
}

void TargetGenerator::forgetTargetType(std::string const &a)
{
		if (tar.find(a) != tar.end())
			tar.erase(a);
}

ATarget* TargetGenerator::createTarget(std::string const &a)
{
	if (a == "Inconspicuous Red-brick Wall")
		return (new BrickWall());
	if (a == "Target Practice Dummy")
		return (new Dummy());
	return (NULL);
}
