#include "BrickWall.hpp"

BrickWall::BrickWall(std::string type) : ATarget(type) {}
BrickWall::BrickWall()
{
	std::string& a = const_cast<std::string &>(getType());
	a = "Inconspicuous Red-brick Wall";
}

BrickWall::~BrickWall() {}

ATarget*	BrickWall::clone() const
{
	return (new BrickWall());
} 