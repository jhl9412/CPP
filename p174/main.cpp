#include <iostream>	
#include <string>	
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
	//22.05.30 new, delete 동적 할당
	// p161 예제와 동일. 메모리 위치만 달라짐 stack -> heap.
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);

	cout << p->getArea() << endl << q->getArea() << endl;

	delete p, q;

#if 0
	//22.05.27
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
#endif
#if 0
	// string class 멤버 함수 이용
	string str = "12457839247892378161673164";
	cout << str.size() << endl;
	cout << str.capacity() << endl;
	cout << str.find("5") << endl;

	cout << " 입력할 정수의 개수는?";
	int n;
	cin >> n; // 
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "번째 정수 : ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "평균 = " << (double)sum / n << endl;
	// 메모리 해제
	delete[] p; // 배열 메모리 반환
	// delete p; -> 비정상 반환. 배열은 배열로, 포인터는 포인터로 반환.
#endif
}

void circle_print(Circle* p)
{
	for (int idx = 0; idx < 3; idx++)
	{
		cout << "Circle " << idx << " area = " << p->getArea() << endl;
		p++;
	}
}