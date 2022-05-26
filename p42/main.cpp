#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	//객체를 이용한 출력
	int a = 8;
	double b = 1.14;
	a = a << 1;

	cout << "Hello World" << endl;
	cout << 5 << endl;
	cout << 3.14 << endl;
	cout << a << endl;
	cout << b << endl;
	// 구구단 출력

	for (int idx = 2; idx < 10; idx++)
	{
		for (int jdx = 1; jdx < 10; jdx++)
		{
			cout << idx << " * " << jdx << " = " << idx * jdx << endl;
		}
	}

	for (int idx = 1; idx < 10; idx++)
	{
		for (int jdx = 2; jdx < 10; jdx++)
		{
			cout << jdx << " * " << idx << " = " << idx*jdx << "\t";
		}
		cout << endl;
	}
	cout << 25.0 / 30 * 100 << endl;
	return 0;
}