#include <iostream>
#include <string>
using namespace std;
// 디폴트 매개변수 선언.
void star(int a = 5);
void msg(int id, string text = "");

void star(int a) {
	for (int i = 0; i < a; i++) cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	star(); // => star(5) 의미
	star(10);

	msg(10);
	msg(10, "hello");
}