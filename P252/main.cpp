#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#if 0
//얕은 복사로 인해 문제 발생
class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::~Person() {
	// 메모리를 두 번 해제. => 포인터 변수로 같은 주소 공유.
	if (name)
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father); // 복사 생성자가 없기 때문에 자동으로 생성.

	cout << "daughter 객체 생성 직후 ====" << endl;
	father.show();
	daughter.show();
	// 사본의 데이터를 바꿀 때 원본도 바뀌는 문제
	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ====" << endl;
	father.show();
	daughter.show();

	return 0;
}
#endif
class Person {
	char* name;
//	char name[10]; => 배열은 얕은 복사라도 문제가 생기지 않는다.
	int id;
public:
	Person(int id, const char* name);
	~Person();
	Person(const Person& person); // 참조연산을 할 때 넘어온 값이 변하면 안되기 때문에 const 선언.
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {
	//매개변수가 두 개인 생성자
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1]; //strlen 을 이용해 입력받은 문자열을 위한 공간 동적 할당.
	strcpy(this->name, name); // this->name의 동적 할당한 공간에 복사.
}

Person::~Person() {
	// destructor
	if (name)
		delete[] name;
}
//Person::Person(const Person& person) { //default 복사 생성자
//	this->name = person.name;
//	this->id = person.id;
//}
Person::Person(const Person& person) { // 복사 생성자 
	//this 가 사본, person 이 원본
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1]; // 새로 공간 할당 => 깊은 복사
	strcpy(this->name, person.name);
}
void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 ====" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ====" << endl;
	father.show();
	daughter.show();

	return 0;
}