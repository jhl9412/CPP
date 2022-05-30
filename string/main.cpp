#include <iostream>
#include <string>	
using namespace std;

int main()
{
#if 0
	string str = "I love";
	str.append(" C++.");
	cout << str << endl;
	string str1("abcdefg");
	string copystr(str1);
	cout << str1 << endl << copystr << endl;

	string* p = new string("c++");
	cout << *p<< endl;
	p->append("great\n");
	cout << *p;
	delete p;

	string names[5];

	for (int i = 0; i < 5; i++) {
		cout << "ㅜ믇 >. ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];
	for (int i = 1; i < 5; i++)
	{
		if (latter < names[i]) latter = names[i];
	}
	cout << "latter  " << latter << endl;
#endif

	// 치환
	//string a = "java", b = "c++";
	//a = b; 
	//cout << a << endl << b << endl;

	//// string compare
	//string name = "kitae", alias = "kito";
	//int res = name.compare(alias);
	//if (res == 0) cout << "same.";
	//else if (res < 0) cout << name << " < " << alias << endl;
	//else cout << alias << "< " << name << endl;

	 //연결, 삽입, 길이
	string a("I");
	a.append(" love");
	string c;
	string b = " c++";
	c = a + b;
	cout << c << endl;
	c.insert(2, "really "); // index 2 에 really 삽입
	cout << c << endl;
	c.replace(2, 11, "study"); // index 2 부터 11글자 공간에 study 대체
	cout << c << endl;

	int length = c.length();
	int size = c.size();
	int capacity = c.capacity();
	cout << "length : " << length << endl;
	cout << "size : " << size << endl;
	cout << "capacity : " << capacity << endl;
	
	//삭제
	c.erase(0, 7);
	cout << c << endl;
	c.clear();
	cout << c;

	// substring
	c = "I love c++";
	string d = c.substr(2, 4);
	string e = c.substr(2);
	cout << d << endl << e << endl;

	// find
	c.insert(7, "love ");
	cout << c << endl;
	int index = c.find("love");
	cout << index << endl;
	index = c.find("love", index + 1);
	cout << index << endl;
	index = c.find("c#");
	cout << index << endl;
	index = c.find('v', 7);
	cout << index << endl;
}