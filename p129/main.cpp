#include <iostream>
using namespace std;
#include "PrivateAccessError.h"

int main() {
	PrivateAccessError objA; // <= �����ڰ� �����Ƿ� �⺻ �����ڰ� ����.
	PrivateAccessError objB(100);
	objA.a_setter(10);
	objB.b = 20;
	objB.h();
	objB.g();
	cout << "objB : " << objA.a_getter();
}