#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	private:
		std::map<std::string ,ATarget*> tar;
		TargetGenerator(const TargetGenerator& cpy);
		TargetGenerator& operator =(const TargetGenerator& cpy);
		/* data */
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
};
