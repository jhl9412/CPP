#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney; // static ��� ����.
	static void addShared(int n) {
		sharedMoney += n;
	}
};
// static ���� �ʱ�ȭ -> ���ϸ� ����.
int Person::sharedMoney = 10;

int main()
{
	Person::addShared(50); // Ŭ������, �������������ڷ� ����.
	cout << Person::sharedMoney << endl; // Ŭ������, �������������ڷ� ���ٰ���.
	// ��ü�� ������ �ʾƵ� ȣ���� ������.
	Person han;
	han.money = 100;
	han.sharedMoney = 200; // ��ü �̸����� ���� ����.
	Person::sharedMoney = 300;
	Person::addShared(100);

	cout << han.money << ' ' << Person::sharedMoney << endl;
}