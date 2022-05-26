#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "주소를 입력하세요 : ";
	char address[100];
	cin.getline(address, 100, '*');
	cout << "주소는 : " << address;
#if 0
	cout << "이름을 입력하세요 : ";
	char name[11];
	cin >> name;

	cout << "이름은 " << name << "입니다.";

	// 입력 스트림 cin
	int width;
	int height;
	//cout << "너비를 입력하세요>>";
	//cin >> width;
	//cout << "높이를 입력하세요>>";
	//cin >> height;
	// 다중 입력 cin 
	// >> : 추출 연산자  << : 삽입 연산자
	// 선언된 자료형에 따라 추출 , 삽입됨

	cout << "너비와 높이를 입력하세요>>";
	cin >> width >> height;
	int area = width * height;
	cout << "면적은 " << area << "\n";
#endif

	return 0;
}