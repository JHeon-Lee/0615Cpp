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
//// ������ ���ö����� �������� �ؼ� ���ŷӴ� --> �θ� Ŭ������ ����� ��ӹް� ����.

class Person
{
public:
	Person() = default;
	Person(const string& name)
		: name(name)
	{}

	auto GetName() const { return name; }
	void SetName(const string& name) { this->name = name; }
	// student, teacher Ŭ�������� �����

protected:
	string name;
};