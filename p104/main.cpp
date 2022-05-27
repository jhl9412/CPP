#include <iostream>
using namespace std;
// destructor + pointer
class Circle {
private:
	int radius;
public: // public �̱� ������ radius �� ������ ����.
	// default �� private. 
	//int radius; //���� ���´� private. �Լ��� ���ؼ� ���� ����.
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
	void radius_setter(int r);
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
Circle::~Circle() {
	cout << "radius " << radius << " Circle deleted" << endl;
}
void Circle::radius_setter(int r) {
	radius = r;
}
void print_circle(Circle* p);

int main(void)
{
	Circle donut;
	//donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << " memory size : " << sizeof(donut) << endl;

	Circle* p; //�Լ��� ȣ�� ���� ������ ���.
	print_circle(&donut);
	
	Circle pizza(30);
	//pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza area : " << area << endl;

}

void print_circle(Circle* p)	// �����Ͱ� �Ű������� ��� �޸𸮸� ȿ�������� ����� �� �ƴ϶�
{								// �����͵� ������ �����ϴ�.
	p->radius_setter(10);
	double area = p->getArea();
	cout << "donut ������ " << area << endl;
}