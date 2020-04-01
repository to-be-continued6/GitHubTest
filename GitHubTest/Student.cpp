#include<iostream>
#include"Student.h"

void Student::do_something() {

}

void Student::show() {
	std::cout <<"id: " << ID <<std::endl;
}

Student::Student(string name, int age, string id) :Person(name, age), ID(id){

}