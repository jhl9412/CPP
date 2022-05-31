#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney; // static 멤버 선언.
	static void addShared(int n) {
		sharedMoney += n;
	}
};
// static 변수 초기화 -> 안하면 에러.
int Person::sharedMoney = 10;

int main()
{
	Person::addShared(50); // 클래스명, 범위지정연산자로 접근.
	cout << Person::sharedMoney << endl; // 클래스명, 범위지정연산자로 접근가능.
	// 객체를 만들지 않아도 호출이 가능함.
	Person han;
	han.money = 100;
	han.sharedMoney = 200; // 객체 이름으로 접근 가능.
	Person::sharedMoney = 300;
	Person::addShared(100);

	cout << han.money << ' ' << Person::sharedMoney << endl;
}