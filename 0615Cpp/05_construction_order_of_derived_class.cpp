#include <iostream>

using namespace std;

// 자식 클래스의 생성자 생성 순서

class Parent
{
public:
	Parent()
		:a(10)
	{
		cout << "Base constructor" << endl;
	}

private:
	int a;
};

class Child : public Parent
{
public:
	Child()
		:c(10.0)
	{
		cout << "Derived constructor" << endl;
	}

private:
	double c;
};

class A			   { public:A() { cout << "A constructor" << endl; } };
class B : public A { public:B() { cout << "B constructor" << endl; } };
class C : public B { public:C() { cout << "C constructor" << endl; } };
class D : public C { public:D() { cout << "D constructor" << endl; } };

int main()
{
	Child child; // 부모, 자식 클래스의 생성자 모두 호출됨 (부모 먼저)

	cout << endl << endl;

	D d; // A, B, C, D 순서대로 생성자 호출됨

	return 0;
}