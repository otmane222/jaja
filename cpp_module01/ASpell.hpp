#pragma once

#include <iostream>

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(const std::string& name, const std::string& effects);
		virtual ~ASpell();

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual ASpell*	clone() const = 0;

		ASpell(const ASpell& other);
		ASpell& operator=(const ASpell& other);

		void	launch(const ATarget& target);
};
