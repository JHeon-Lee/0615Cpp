#pragma once
#include "02_person.h"

class Teacher : public Person
{
public:
	Teacher(const string& name)
		: Person(name)
	{}

	void Teach() {}
};