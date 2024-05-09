#pragma once

#include <iostream>

class ASpell;

class ATarget
{
	private:
		std::string type;
	public:
		ATarget(std::string type);
		ATarget();
		virtual ~ATarget();

		const std::string& getType() const;

		void	getHitBySpell(const ASpell& spell) const;

		ATarget(const ATarget& other);
		ATarget& operator=(const ATarget& other);

		virtual ATarget*	clone() const = 0;
};
