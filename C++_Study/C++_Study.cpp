#include <iostream>
#include <string>

template <typename T>
struct Compare{
	bool override()(int a, int b) const {return a < b;}
};

template<typename T, typename Comp = Compare<int>>
T Min(T a, T b) {
	Comp comp;
	if (comp(a, b)) {
		return a;
	}
	return b;
}


int main() {
	return 0;
}