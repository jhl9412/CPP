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
	Circle circleArray[3] = { Circle(10),Circle(20),Circle(30) }; // circle 객체 배열 
	// 배열 초기화를 해주면 매개변수 있는 생성자를 사용할 수 있다.
	// 배열의 각 원소 객체의 멤버 접근
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