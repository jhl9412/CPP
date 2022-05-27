#include <iostream>
using namespace std;

class Rectangle {
private:
	int width, height;
public:
	Rectangle();
	Rectangle(int length);
	Rectangle(int w, int h);
	bool isSquare();

};
Rectangle::Rectangle():Rectangle(1,1) {}
Rectangle::Rectangle(int length):Rectangle(length,length) {}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}
int main() {
	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1 is square" << endl;
	if (rect2.isSquare()) cout << "rect2 is square" << endl;
	if (rect3.isSquare()) cout << "rect3 is square" << endl;
	
	return 0;
}