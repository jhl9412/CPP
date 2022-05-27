#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public: // public �̱� ������ radius �� ������ ����.
	// default �� private. 
	//int radius; //���� ���´� private. �Լ��� ���ؼ� ���� ����.
	Circle();
	Circle(int r);
	double getArea();
};
Circle::Circle() : Circle(1) {}
Circle::Circle(int r) //Ÿ�ٻ�����
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

	cout << "donut ������ " << area << " memory size : " << sizeof(donut) << endl;

	Circle pizza(30);
	//pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza area : " << area << endl;

}