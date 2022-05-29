#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}
void circle_print(Circle* p);
int main() {
	Circle circleArray[3] = { Circle(10),Circle(20),Circle(30) }; // circle ��ü �迭 
	// �迭 �ʱ�ȭ�� ���ָ� �Ű����� �ִ� �����ڸ� ����� �� �ִ�.
	// �迭�� �� ���� ��ü�� ��� ����
	//circleArray[0].setRadius(10);
	//circleArray[1].setRadius(20);
	//circleArray[2].setRadius(30);
	
	for (int idx = 0; idx < 3; idx++)
	{
		cout << "circle " << idx << " area = " << circleArray[idx].getArea() << endl;
	}

	Circle* p;
	p = circleArray;
	circle_print(p);

}

void circle_print(Circle* p)
{
	for (int idx = 0; idx < 3; idx++)
	{
		cout << "Circle " << idx << " area = " << p->getArea() << endl;
		p++;
	}
}