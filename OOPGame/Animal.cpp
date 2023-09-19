#include "Animal.h"
#include <stdexcept>


Animal::Animal()
{
}

Animal::Animal(std::string name, std::string description)
{
	name_ = name;
	description_ = description;
	legs_ = 4;
}

std::string Animal::getName() {
	return name_;
}

std::string Animal::getDescription() {
	return description_;
}

int Animal::getLegs()
{
	return legs_;
}

void Animal::setName(std::string name) {

	if (name.empty())
	{
		throw std::invalid_argument("Name cannot be empty");
	}

	name_ = name;
}

void Animal::setDescription(std::string description) {
	description_ = description;
}

void Animal::setLegs(int legs)
{
	legs_ = legs;
}
