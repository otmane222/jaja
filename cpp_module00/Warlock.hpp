#pragma once

#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock(/* args */);
	public:
		Warlock(const Warlock& cpy);
		Warlock& operator = (const Warlock& cpy);
		Warlock(const std::string& name, const std::string& title);
		virtual ~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;

		void introduce() const;
		void	setTitle(const std::string&);
};
