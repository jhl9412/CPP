#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song + "�� �θ� ������";
	cout << "(��Ʈ : ù ���ڴ� " << elvis[0] << ")?";

	getline(cin, singer);
	if (singer == elvis)
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�. " << endl;

	return 0;
}