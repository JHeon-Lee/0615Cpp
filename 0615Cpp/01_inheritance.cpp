#include <iostream>

using namespace std;

class Mother
{
public:
	auto GetA() const
	{
		cout << "Mother" << endl;
		return a;
	}
	void SetA(const int& a) { this->a = a; }

private:
	int a;

protected:
	int b;
	int c;
};

class Child : public Mother
{
public:
	auto GetA() const
	{
		//a; --> 접근 불가
		b; // Mother의 b 사용하고 싶다면 Mother::b; 로 사용
		c; // b,c는 접근 가능

		cout << "Child" << endl;
		return Mother::GetA();
	}

	auto GetA2() const
	{
		return __super::GetA(); // 부모클래스의 GetA()를 불러옴
	}

private:
	int b; // 부모 클래스의 b보다 자식 클래스의 b가 우선됨 (전역변수 vs 지역변수의 느낌)
};

int main()
{
	Child c;

	c.SetA(10); // 사용 가능 --> 부모클래스 부터 생성되서 자식클래스 까지 만들어지므로 SetA 사용 가능
	c.GetA(); // Child, Mother 둘 다 찍힘

	c.Mother::GetA(); // Mother 만 찍힘

	c.GetA2();

	return 0;
}