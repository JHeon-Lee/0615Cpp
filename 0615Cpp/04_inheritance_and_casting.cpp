#include <iostream>

using namespace std;

// ����ȯ

// Up casting : �ڽ�Ŭ������ �θ�Ŭ���� �����ͷ� ����Ű�� �� (�θ� ����� ũ��) // �Ͻ��� ����ȯ
// Down casting : �θ� Ŭ���� �����Ͱ� ����Ű�� ��ü�� �ڽ� Ŭ���� �����ͷ� ����Ű�� �� // ����� ����ȯ

class Snack{};

class Chitos : public Snack {};
class ChocoChip : public Snack {};
class Homerunball : public Snack {};

int main()
{
	// Up casting
	Snack* chocochip = new ChocoChip(); // �ڵ� ����ȯ��
	Snack* chitos = new Chitos();
	Snack* homerunball = new Homerunball();

	// ��� �����ϰ� ������
	Snack* snack[3] = { chocochip, chitos, homerunball };

	// Down casting
	// Chitos* test = chitos; --> �ڵ� ����ȯ �ȵ� �׷���..
	Chitos* test = static_cast<Chitos*>(chitos);

	// Chitos* tt = new Snack(); ������ �Ұ�����

	return 0;
}

// Up, Down casting ��� ���� : �������� �ڵ� ���뼺�� ����