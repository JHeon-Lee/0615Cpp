#include <iostream>

using namespace std;

// �ڽ� Ŭ������ ������ ���� ����

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
	Child child; // �θ�, �ڽ� Ŭ������ ������ ��� ȣ��� (�θ� ����)

	cout << endl << endl;

	D d; // A, B, C, D ������� ������ ȣ���

	return 0;
}