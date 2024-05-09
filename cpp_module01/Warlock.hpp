#pragma once

#include <iostream>
#include <map>
#include <algorithm>
#include "ASpell.hpp"

class ATarget;

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::map<std::string, ASpell*> spells;
		Warlock(/* args */);
	public:
		Warlock(const std::string& name, const std::string& title);
		virtual ~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;

		void introduce() const;
		void	setTitle(const std::string&);

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spellname);
		void	launchSpell(std::string spellname, const ATarget& target);

		Warlock(const Warlock& other);
		Warlock& operator=(const Warlock& other);

};
