#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class Circle {
	int radius;
	char name[12]="";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle& c);
	void setRadius(int r) { radius = r; }
	void setName(const char *np) { 
		strcpy(name, np);
	}
	char* getName() { return name; }
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
// 디폴트 복사 생성자 => 얕은 복사
Circle::Circle(const Circle& c)
{
	this->radius = c.radius;
	strcpy(this->name, c.name);
}
void circle_print(Circle* p);
int main() {
	Circle src(30);
	src.setName("홍길동");
	cout << "name " << src.getName() << endl;
	Circle dest(src);
	cout << "name " << dest.getName() << endl;
	cout << "원본의 면적 " << src.getArea() << endl;
	cout << "사본의 면적 " << dest.getArea() << endl;
}
void circle_print(Circle* p)
{
	for (int idx = 0; idx < 3; idx++)
	{
		cout << "Circle " << idx << " area = " << p->getArea() << endl;
		p++;
	}
}