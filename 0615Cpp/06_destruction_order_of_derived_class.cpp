#include <iostream>

using namespace std;

// 소멸자 호출 순서

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
	B b; // A생 B생 B소 A소 순서

	cout << endl;

	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl; // 구조체 size 계산때 처럼 8 + 8 = 16바이트로 나옴 --> 메모리 내부 단편화

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
	char c3; // --> 48byte , 정리하면 잡아먹는 메모리를 줄일 수 있음
};