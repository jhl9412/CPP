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
	//22.05.30 new, delete ���� �Ҵ�
	// p161 ������ ����. �޸� ��ġ�� �޶��� stack -> heap.
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);

	cout << p->getArea() << endl << q->getArea() << endl;

	delete p, q;

#if 0
	//22.05.27
	Circle circleArray[3] = { Circle(10),Circle(20),Circle(30) }; // circle ��ü �迭 
	// �迭 �ʱ�ȭ�� ���ָ� �Ű����� �ִ� �����ڸ� ����� �� �ִ�.
	// �迭�� �� ���� ��ü�� ��� ����
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
	// string class ��� �Լ� �̿�
	string str = "12457839247892378161673164";
	cout << str.size() << endl;
	cout << str.capacity() << endl;
	cout << str.find("5") << endl;

	cout << " �Է��� ������ ������?";
	int n;
	cin >> n; // 
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "��° ���� : ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "��� = " << (double)sum / n << endl;
	// �޸� ����
	delete[] p; // �迭 �޸� ��ȯ
	// delete p; -> ������ ��ȯ. �迭�� �迭��, �����ʹ� �����ͷ� ��ȯ.
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