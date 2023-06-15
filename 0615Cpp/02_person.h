#pragma once
#include <string>

using namespace std;

//class Student
//{
//public:
//	Student() = default;
//	Student(const string& name)
//		: name(name)
//	{}
//
//	auto GetName() const { return name; }
//	void SetName(const string& name) { this->name = name; }
//
//	void Study(){}
//
//private:
//	string name;
//};
//
//class Teacher
//{
//public:
//	Teacher() = default;
//	Teacher(const string& name)
//		: name(name)
//	{}
//
//	auto GetName() const { return name; }
//	void SetName(const string& name) { this->name = name; }
//
//	void Teach() {}
//
//private:
//	string name;
//};
//// 직업이 나올때마다 만들어줘야 해서 번거롭다 --> 부모 클래스를 만들고 상속받게 하자.

class Person
{
public:
	Person() = default;
	Person(const string& name)
		: name(name)
	{}

	auto GetName() const { return name; }
	void SetName(const string& name) { this->name = name; }
	// student, teacher 클래스에서 재사용됨

protected:
	string name;
};