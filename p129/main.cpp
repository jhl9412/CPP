#include <iostream>
using namespace std;
#include "PrivateAccessError.h"

int main() {
	PrivateAccessError objA; // <= 생성자가 있으므로 기본 생성자가 없음.
	PrivateAccessError objB(100);
	objA.a_setter(10);
	objB.b = 20;
	objB.h();
	objB.g();
	cout << "objB : " << objA.a_getter();
}