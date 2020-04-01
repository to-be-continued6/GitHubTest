#pragma once

#include "Person.h"

class Student : Person {
private:
	string ID;
public:
	Student(string name, int age, string id);
	void show();
	void do_something();	// Do somthing as you like, but you have to print something
};
