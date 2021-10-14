#include <iostream>
#include <string>
#include "Vector.h"


int main() {
	sp::Vector<double> v1(5, 5);
	sp::Vector<int> v2(10);
	sp::Vector<double> v3(5, [](const size_t index) {return 1.1 * index + 1.0; });
	for (size_t i = 0; i != v1.Size(); i++) {
		std::cout << v3[i] << std::endl;
	}
}



//template<class T>
//T Converter(const std::string& text) {}
//
//template <> 
//double Converter(const std::string& text) {
//	return std::stod(text);
//}
//
//template <>
//int Converter(const std::string& text) {
//	return std::stoi(text);
//}
//
//template <>
//float Converter(const std::string& text) {
//	return std::stof(text);
//}
//
//template<class T, class U>
//T Add(const T& l, const U& r) {
//	return (T)l + r;
//}
//
//template<class T>
//T Add(const T& l, const std::string& r) {
//	return l + Converter<T>(r);
//}
//
//template<class T>
//T Add(const std::string& l, const T& r) {
//	return Converter<T>(l) + r;
//}
//
//template<class T>
//T Add(const T& l, const char* r) {
//	return l + Converter<T>(r);
//}
//
//int main() {
//	std::cout << Add(13.5, 4.2) << std::endl;
//	std::cout << Add(13.5, 4) << std::endl;
//	std::cout << Add(13, 4.5) << std::endl;
//	std::cout << Add("13", 4.5) << std::endl;
//	std::cout << Add(13, "4.5") << std::endl;
//}