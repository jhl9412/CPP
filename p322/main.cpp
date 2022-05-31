#include <iostream>
using namespace std;
//p322, 324, 325
class Rect;
//bool equals(Rect r, Rect s); //=>����
class RectManager { //=> �ܺ�Ŭ����
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	//friend bool equals(Rect r, Rect s); //=>����
	//friend bool RectManager::equals(Rect r, Rect s);//=> �ܺ�Ŭ���� ��� �Լ�
	friend RectManager; // =>�ܺ� Ŭ���� ��ü�� friend ����.
};


bool RectManager::equals(Rect r, Rect s) { //=> �ܺ�Ŭ����
	if (r.width == s.width && r.height == s.height)return true;
	else return false;
}
void RectManager::copy(Rect& dest, Rect& src) {
	dest.width = src.width; dest.height = src.height;
}
//bool equals(Rect r, Rect s) {  //=>����
//	if (r.width == s.width && r.height == s.height)return true;
//	else return false;
//}

int main() {
	Rect a(3, 4), b(4, 5);
	RectManager man; //=> �ܺ�Ŭ����
	man.copy(b, a);
	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}