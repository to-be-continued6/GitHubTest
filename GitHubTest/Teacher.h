#pragma once
#include "Person.h"

class Teacher : Person {
private:
	string id;
	string class_id;
public:
	Teacher(string name, int age, string id, string class_id);
	void show();
	void do_something();	// Do somthing as you like, but you have to print something
};

