#include "Person.h"
#include <iostream>

void Person::update_age() {
	age++;
}

void Person::show() {
	std::cout << "name: " << name << " age: " << age << std::endl;
}