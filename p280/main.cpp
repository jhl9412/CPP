#include <iostream>
using namespace std;
// �Լ� �ߺ� ����
int big(int a, int b) {
	// ū �� ����
	if (a > b) return a; 
	else return b;
}

int big(int* a, int size) {
	int res = a[0];

	// �迭���� max ã��
	for (int i = 1; i < size; i++)
		if (res < a[i]) res = a[i];
	return res;
}

int main()
{
	int array[5]{ 1,9,-2,8,6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}