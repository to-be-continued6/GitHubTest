#pragma once

#include<string>
using std::string;

class Person
{
private:
	string name;
	int age;
public:
	Person(string name, int age) :name(name), age(age) {}
	void update_age();
	virtual void show();
	virtual void do_something() = 0;
};

