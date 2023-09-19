#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(std::string name) : Animal()
	{
		setName(name);
		setDescription("");
		setLegs(4);
		weakness_ = "scratch ear";
	}

	std::string getWeakness();


private:
	std::string weakness_;

};

