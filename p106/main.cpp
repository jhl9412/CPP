#include <iostream>
using namespace std;

class rectangle {
public:
	rectangle();
	rectangle(int, int);
	int getArea();
	void setWidthHeight(int , int );
private:
	int width;
	int height;
};
rectangle::rectangle() {
	width = 1;
	height = 2;
}
rectangle::rectangle(int w, int h) {
	width = w;
	height = h;
}
int rectangle::getArea()
{
	return width * height;
}
void rectangle::setWidthHeight(int w, int h)
{
	width = w;
	height = h;
}
int main()
{
	rectangle rect1 = rectangle();
	rectangle rect2 = rectangle(10, 20);
	//rect.width = 3;
	//rect.height = 5;
	//rect.setWidthHeight(7, 5);
	cout << "Rectangle1 Area : " << rect1.getArea() << endl;
	cout << "Rectangle2 Area : " << rect2.getArea() << endl;
	return 0;
}