#include <iostream>

using namespace std;

// �Ҹ��� ȣ�� ����

class A
{
public:
	A() { cout << "A constructor" << endl; }
	~A() { cout << "A destructor" << endl; }

private:
	int a;
};

class B : public A
{
public:
	B() { cout << "B constructor" << endl; }
	~B() { cout << "B destructor" << endl; }

private:
	double b;
};

int main()
{
	B b; // A�� B�� B�� A�� ����

	cout << endl;

	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl; // ����ü size ��궧 ó�� 8 + 8 = 16����Ʈ�� ���� --> �޸� ���� ����ȭ

	return 0;
}

struct P
{
	char c1;
	double d1;
	int i1;
	int i2;
	short s1;
	short s2;
	double d2;
	char c2;
	char c3; // --> 48byte , �����ϸ� ��ƸԴ� �޸𸮸� ���� �� ����
};