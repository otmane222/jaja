#pragma once

#include "ATarget.hpp"

class Dummy : public ATarget
{
	private:
		
	public:
		Dummy();
		Dummy(std::string type);
		~Dummy();

		ATarget*	clone() const;
};
