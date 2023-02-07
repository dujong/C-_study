//#include <iostream>
//#include <string>
//
//void AppendToString(std::string* concat_str) { return; }
//template<typename String, typename... Strings>
//void AppendToString(std::string* concat_str, const String& s, Strings... strs) {
//	concat_str->append(s);
//	AppendToString(concat_str, strs...);
//}
//
//template <typename String>
//std::string StrCat(const String& s) {
//	return std::string(s);
//}
//
//size_t GetStringSize(const char* s) { return strlen(s); }
//size_t GetStringSize(const std::string& s) { return s.size(); }
//template <typename String, typename... Strings>
//size_t GetStringSize(const String& s, const Strings... strs) {
//	return GetStringSize(s) + GetStringSize(strs...);
//}
//
//template<typename String, typename... Strings>
//std::string StrCat(const String& s, Strings... strs) {
//	size_t total_size = GetStringSize(s, strs...);
//	std::string concat_str;
//	concat_str.reserve(total_size);
//	concat_str = s;
//
//	AppendToString(&concat_str, strs...);
//
//	return concat_str;
//}
//
//
//template <typename Int, typename... Ints>
//Int diff_from(Int start, Ints... nums) {
//	return (start - ... - nums);
//}
//
//
//int main1() {
//	/*std::cout << StrCat(std::string("this"), " ", "is", " ", std::string("a"),
//		" ", std::string("sentence"));*/
//
//		std::cout << diff_from(100, 1, 4, 2, 3, 10) << std::endl;
//	return 0;
//}
//
//#include <iostream>
//
//template <int N>
//struct Factorial
//{
//	static const int result = N * Factorial<N - 1>::result;
//};
//
//template<>
//struct Factorial<1> {
//	static const int result = 1;
//};
//
//template<int X, int Y>
//struct GCD {
//	static const int value = GCD<Y, X% Y>::value;
//};
//
//template<int X>
//struct GCD<X, 0> {
//	static const int value = X;
//};
//
//
//
//int main2() {
//	std::cout << "6! = 1*2*3*4*5*6 = " << Factorial<6>::result << std::endl;
//	return 0;
//}