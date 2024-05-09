#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook
{
	private:
		std::map<std::string ,ASpell*> book;
		SpellBook(const SpellBook& cpy);
		SpellBook& operator =(const SpellBook& cpy);
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};
