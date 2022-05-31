#include <iostream>
using namespace std;
//p322, 324, 325
class Rect;
//bool equals(Rect r, Rect s); //=>전역
class RectManager { //=> 외부클래스
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	//friend bool equals(Rect r, Rect s); //=>전역
	//friend bool RectManager::equals(Rect r, Rect s);//=> 외부클래스 멤버 함수
	friend RectManager; // =>외부 클래스 전체를 friend 선언.
};


bool RectManager::equals(Rect r, Rect s) { //=> 외부클래스
	if (r.width == s.width && r.height == s.height)return true;
	else return false;
}
void RectManager::copy(Rect& dest, Rect& src) {
	dest.width = src.width; dest.height = src.height;
}
//bool equals(Rect r, Rect s) {  //=>전역
//	if (r.width == s.width && r.height == s.height)return true;
//	else return false;
//}

int main() {
	Rect a(3, 4), b(4, 5);
	RectManager man; //=> 외부클래스
	man.copy(b, a);
	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}