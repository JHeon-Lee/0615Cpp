#include <iostream>

using namespace std;

// 형변환

// Up casting : 자식클래스를 부모클래스 포인터로 가리키는 것 (부모가 개념상 크다) // 암시적 형변환
// Down casting : 부모 클래스 포인터가 가리키는 객체를 자식 클래스 포인터로 가리키는 것 // 명시적 형변환

class Snack{};

class Chitos : public Snack {};
class ChocoChip : public Snack {};
class Homerunball : public Snack {};

int main()
{
	// Up casting
	Snack* chocochip = new ChocoChip(); // 자동 형변환됨
	Snack* chitos = new Chitos();
	Snack* homerunball = new Homerunball();

	// 묶어서 관리하고 싶을때
	Snack* snack[3] = { chocochip, chitos, homerunball };

	// Down casting
	// Chitos* test = chitos; --> 자동 형변환 안됨 그래서..
	Chitos* test = static_cast<Chitos*>(chitos);

	// Chitos* tt = new Snack(); 따위도 불가능함

	return 0;
}

// Up, Down casting 사용 이유 : 다형성과 코드 재사용성을 위해