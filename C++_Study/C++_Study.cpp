#include <iostream>
#include <string>
#include <fstream>
	
int main() {
	std::ifstream in("test.txt");
	std::string s;

	if (in.is_open()) {
		in >> s;
		std::cout << "입력 받은문자열 :: " << s << std::endl;
	}
	else {
		std::cout << "파일을 찾을 수 없습니다!" << std::endl;
	}

	return 0;
}