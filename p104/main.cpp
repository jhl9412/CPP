#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public: // public 이기 때문에 radius 에 접근이 가능.
	// default 는 private. 
	//int radius; //보통 상태는 private. 함수를 통해서 상태 변경.
	Circle();
	Circle(int r);
	double getArea();
};
Circle::Circle() : Circle(1) {}
Circle::Circle(int r) //타겟생성자
{
	radius = r;
	cout << "Radius" << radius << " Circle" << endl;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main(void)
{
	Circle donut;
	//donut.radius = 1;
	double area = donut.getArea();

	cout << "donut 면적은 " << area << " memory size : " << sizeof(donut) << endl;

	Circle pizza(30);
	//pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza area : " << area << endl;

}