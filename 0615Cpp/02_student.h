#pragma once
#include "02_person.h"

class Student : public Person
{
public:
	Student(const string& name)
		: Person(name)
	{}

	void Study(){} // »Æ¿Â
};