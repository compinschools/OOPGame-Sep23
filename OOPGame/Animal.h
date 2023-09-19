#pragma once
#include <string>
#include <map>
class Animal
{
public:
	Animal();
	Animal(std::string name, std::string description);
	std::string getName();
	std::string getDescription();
	int getLegs();

	void setName(std::string name);
	void setDescription(std::string description);
	void setLegs(int legs);
	std::map<std::string, Animal*> housemates = {};
private:
	int legs_;
	std::string name_;
	std::string description_;

};

