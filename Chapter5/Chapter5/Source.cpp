#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

using std::cin;
using std::runtime_error;
using std::cout;
using std::vector;
using std::size_t;
using std::string;

int main() {
	//5.23-5.25
	//	int a = 0, b = 0; 
	//	double r = 0;
	//	cin >> a;
	//	while (cin >> b) {
	//		try {
	//			if (b == 0) {
	//				throw runtime_error("dziel przez zero");
	//			}
	//			r = a / b;
	//			break;
	//		}
	//		catch (runtime_error zero) {
	//			cout << "Wprowadz ponownie druga liczbe \n";
	//		}
	//	}
	//	cout << "Wynik to: " << r;
	//	return 0;
	//}
//5.17
//	vector<int> v1 = { 1,2,3,4,5 };
//	vector<int> v2 = { 1,2,3,4,5,6,7,8,9 };
//	size_t i = 0;
//	if (v1.size() >= v2.size()) {
//		for (auto it = v2.begin(); it != v2.end(); it++, i++) {
//			if (*it != v1[i]) {
//				cout << "Wektory maja rozna zawartosc";
//				return 0;
//			}
//		}
//		cout << "Wektory sa takie same lub v2 jest subwektorem v1";
//	}
//	else {
//		for (auto it = v1.begin(); it != v1.end(); it++, i++) {
//			if (*it != v2[i]) {
//				cout << "Wektory maja rozna zawartosc";
//				return 0;
//			}		
//		}
//		cout << "Wektory sa takie same lub v1 jest subwektorem v2";
//	}
//}
//5.14
//	string s = "";
//	int cntMost = 1;
//	int cntNew = 0;
//	string previous = "";
//	string word = "";
//	while (cin >> s) {
//		if (previous == s) {
//			++cntNew;
//			if (cntMost < cntNew) {
//				cntMost = cntNew;
//				word = previous;
//			}
//		}
//		else {
//			previous = s;
//			cntNew = 1;
//		}
//	}
//	cout << "Najczesciej wystapilo slowo " << word << " " << cntMost << " razy";
//}