#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	private:
		
	public:
		BrickWall();
		BrickWall(std::string type);
		~BrickWall();

		ATarget*	clone() const;
};
