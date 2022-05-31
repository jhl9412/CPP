#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();;
	Power operator-(Power& op2); // operator- => �̰Ÿ� ȣ��.
	bool operator==(Power& op2);
	Power& operator<<(int n);
	friend Power operator+(Power& op1, Power& op2);
};
void Power::show() {
	cout << "kick=" << kick << ','<<"punch="<< punch << endl;
}

Power Power::operator-(Power& op2) { //��ü�� �ѱ� �� ������ ����. ������ ���������� ���� �߻�.
	Power tmp;
	tmp.kick = this->kick - op2.kick;
	tmp.punch = this->punch - op2.punch;
	return tmp;
}

bool Power::operator==(Power& op2) {
	if((this->kick ==op2.kick)&&(this->punch == op2.punch)) return true;
	else return false;
}
Power& Power::operator<<(int n) {
	kick += n;
	punch += n;
	return *this; // ���� ����
}

Power operator+(Power& op1, Power& op2)
{
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}
int main() {
	Power a(3, 5), b(3, 5), c;
	c = a - b;
	a.show();
	b.show();
	c.show();
	c = a + b;
	c.show();
	a << 3 << 5 << 6;
	a.show();
	if (a == b)cout << "�� �Ŀ��� ����." << endl;
	else cout << "�� �Ŀ��� �ٸ���." << endl;
}