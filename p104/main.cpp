#include <iostream>
using namespace std;
// destructor + pointer
class Circle {
private:
	int radius;
public: // public 이기 때문에 radius 에 접근이 가능.
	// default 는 private. 
	//int radius; //보통 상태는 private. 함수를 통해서 상태 변경.
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
	void radius_setter(int r);
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
	cout << "donut 면적은 " << area << " memory size : " << sizeof(donut) << endl;

	Circle* p; //함수의 호출 관계 때문에 사용.
	print_circle(&donut);
	
	Circle pizza(30);
	//pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza area : " << area << endl;

}

void print_circle(Circle* p)	// 포인터가 매개변수인 경우 메모리를 효율적으로 사용할 뿐 아니라
{								// 데이터도 변경이 가능하다.
	p->radius_setter(10);
	double area = p->getArea();
	cout << "donut 면적은 " << area << endl;
}