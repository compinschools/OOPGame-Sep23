// OOPGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main()
{
    Dog dog = Dog("Fido");
    //std::cout << dog.getName() + "\ndescription:" + dog.getDescription() +"\n";
    //dog.setName("");
    //dog.setDescription("Rex is a hounddog");
    std::cout << dog.getName() + "\ndescription:" + dog.getDescription() + "\n";
    std::cout << "dog legs: " + std::to_string(dog.getLegs()) + "\n";
    

    Dog dog2 = Dog("Butch");
    //std::cout << dog2.getName();
    dog.housemates["friend"] = &dog2;
    
    std::cout << "weakness" + ((Dog*)dog.housemates["friend"])->getWeakness();
    
    dog2.setName("Betty");

    std::cout << dog.housemates["friend"]->getName();

    Animal cat = Animal("Boris", "Ignores me everytime");
    dog.housemates["enemy"] = &cat;
    //std::cout << cat.getName();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
