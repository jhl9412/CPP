#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "�ּҸ� �Է��ϼ��� : ";
	char address[100];
	cin.getline(address, 100, '*');
	cout << "�ּҴ� : " << address;
#if 0
	cout << "�̸��� �Է��ϼ��� : ";
	char name[11];
	cin >> name;

	cout << "�̸��� " << name << "�Դϴ�.";

	// �Է� ��Ʈ�� cin
	int width;
	int height;
	//cout << "�ʺ� �Է��ϼ���>>";
	//cin >> width;
	//cout << "���̸� �Է��ϼ���>>";
	//cin >> height;
	// ���� �Է� cin 
	// >> : ���� ������  << : ���� ������
	// ����� �ڷ����� ���� ���� , ���Ե�

	cout << "�ʺ�� ���̸� �Է��ϼ���>>";
	cin >> width >> height;
	int area = width * height;
	cout << "������ " << area << "\n";
#endif

	return 0;
}