#ifndef _PrivateAccessError_H_
#define _PrivateAccessError_H_ 
class PrivateAccessError {
private:
	int a;
	void f();
public:
	int b;
	PrivateAccessError();
	PrivateAccessError(int x);
	void g();
	void h();
	int a_getter();
	void a_setter(int a);
};
#endif