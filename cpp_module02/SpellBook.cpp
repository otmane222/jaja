#include "SpellBook.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "Fwoosh.hpp"

SpellBook::SpellBook(/* args */)
{
}

SpellBook::~SpellBook()
{
}

SpellBook::SpellBook(const SpellBook& cpy)
{
	*this = cpy;
}

SpellBook& SpellBook::operator =(const SpellBook& cpy)
{
	book = cpy.book;
	return (*this);
}


void SpellBook::learnSpell(ASpell* a)
{
	if (a)
	{
		book[a->getName()] = a->clone();
	}
}

void SpellBook::forgetSpell(std::string const &a)
{
	if (book.find(a) != book.end())
		book.erase(book.find(a));
}

ASpell* SpellBook::createSpell(std::string const &a)
{
	ASpell *t;

	t = NULL;
	if (book.find(a) != book.end())
		t = book[a];
	return (t);
}
