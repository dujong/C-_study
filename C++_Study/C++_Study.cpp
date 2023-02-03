#include <iostream>
#include <string>

class Parent {
	int a;

public:
	Parent(int a) : a(a) {}
	virtual int f() { return a; }
};

class Child : public Parent {
	int b;

public:
	Child(int b) : Parent(), b(b) {}
	int f() override { return b; }
};

int main() {
	Parent* p = new Parent(10);
	Parent* c = new Child(20);
	

	return 0;
}