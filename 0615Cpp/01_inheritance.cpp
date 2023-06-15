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
		//a; --> ���� �Ұ�
		b; // Mother�� b ����ϰ� �ʹٸ� Mother::b; �� ���
		c; // b,c�� ���� ����

		cout << "Child" << endl;
		return Mother::GetA();
	}

	auto GetA2() const
	{
		return __super::GetA(); // �θ�Ŭ������ GetA()�� �ҷ���
	}

private:
	int b; // �θ� Ŭ������ b���� �ڽ� Ŭ������ b�� �켱�� (�������� vs ���������� ����)
};

int main()
{
	Child c;

	c.SetA(10); // ��� ���� --> �θ�Ŭ���� ���� �����Ǽ� �ڽ�Ŭ���� ���� ��������Ƿ� SetA ��� ����
	c.GetA(); // Child, Mother �� �� ����

	c.Mother::GetA(); // Mother �� ����

	c.GetA2();

	return 0;
}