#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::size_t;
using std::vector;
using std::cin;

int main() {
//3.36
	//constexpr size_t n = 3;
	//constexpr size_t m = 4;
	//int tab1[n] = { 1,2,3 };
	//int tab2[m] = { 1,2,3,4 };
	//if (std::end(tab1) - std::begin(tab1) == std::end(tab2) - std::begin(tab2)) {
	//	for (int i = 0; i < std::end(tab1) - std::begin(tab1); i++) {
	//		if (*(tab1 + i) != *(tab2 + i)) {
	//			cout << "inne" << endl;
	//			break;
	//		}
	//	}
	//	cout << "takie same" << endl;
	//}
	//else {
	//	cout << "inne" << endl;
	//}

//3.35 
	//constexpr size_t n = 5;
	//int tab[n] = { 1,2,3,4,5 };
	//for (int i = 0; i < n; i++) {
	//	*(tab + i) = 0;
	//	cout << *(tab + i) << " ";
	//}

//3.32a
	//constexpr size_t n = 10;
	//int tab[n];
	//int v = 0;
	//for (auto &i : tab) {
	//	i = v;
	//	v++;
	//	cout << i << " ";
	//}
	//cout << endl;
	//v = 0;
	//int tab1[n];
	//for (auto &i : tab1) {
	//	i = tab[v];
	//	v++;
	//	cout << i << " ";
	//}

//3.32b
	//constexpr size_t n = 10;
	//vector<int> v(n);
	//int val = 0;
	//for (auto i = v.begin(); i != v.end(); i++) {
	//	*i = val;
	//	val++;
	//	cout << *i << " ";
	//}

//3.31
	//constexpr size_t n = 10;
	//int tab[n];
	//int v = 0;
	//for (auto &i : tab) {
	//	i = v;
	//	v++;
	//	cout << i << " ";
	//}

//3.25 
	//vector<unsigned> scores(11, 0);
	//unsigned grade;
	//while (cin >> grade) {
	//	if (grade <= 100) {
	//		auto it = scores.begin();
	//		it += grade / 10;
	//		(*it)++;
	//	}
	//}
	//for (auto it = scores.begin(); it != scores.end(); it++) {
	//	cout << *it << " ";
	//}

//3.23
	//vector<int> v = { 1,6,4,51,12,22,105,77,0 };
	//for (auto it = v.begin(); it != v.end(); it++) {
	//	*it += *it;
	//	cout << *it << " ";
	//}

//3.22
	//vector<string> text = {"halo", "siema", "", "yep"};
	//for (auto it = text.begin(); it != text.end() && !it->empty(); it++) {
	//	for (auto itt = it->begin(); itt != it->end(); itt++) {
	//		*itt = toupper(*itt);
	//	}
	//	cout << *it << " ";
	//}

//3.20b
	//vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	//for (size_t i = 0; i < v.size()/2; i++) {
	//	cout << v[i] + v[v.size() - 1 - i] << " ";
	//} 
	//if (v.size() % 2 != 0) {
	//	cout << v[v.size() / 2];
	//}

//3.20a
	//vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	//for (decltype(v.size()) i = 0; i < v.size() - 1; i++) {
	//	std::cout << v[i] + v[i + 1] << " ";
	//}

//3.17
	//vector<string> v;
	//string l;
	//while (cin >> l) {
	//	v.push_back(l);
	//}
	//for (auto &i : v) {
	//	for (auto& i2 : i) {
	//		i2 = toupper(i2);
	//	}
	//	cout << i << " ";
	//}

//3.16
	//vector<int> v1;
	//vector<int> v2(10);
	//vector<int> v3(10, 42);
	//vector<int> v4{ 10 };
	//vector<int> v5{ 10, 42 };
	//vector<string> v6{ 10 };
	//vector<string> v7{ 10, "hi" };
	//cout << v1.size() << " " << v2.size() << " " << v3.size() << " " << v4.size() << " " << v5.size() << " " << v6.size() << " " << v7.size();

//3.14
	//vector<int> v;
	//int l;
	//while (cin >> l) {
	//	v.push_back(l);
	//}
	//for (auto i : v) {
	//	cout << i << " ";
	//}

//3.11
		//const string s = "Keep out!";
		//for (auto& c : s) {}

//3.10
		//string ss = "HELLO, THERE!!! CAN you hear me??.";
		//for (auto s : ss) {
		//	if(!ispunct(s)){
		//		cout << s;
		//	}
		//}

// 3.8b
		//string ss("slowo");
		//cout << ss;
		//for (size_t it = 0; it < ss.size(); it++){
		//	ss[it] = 'x';
		//}
		//cout << endl;
		//cout << ss;

// 3.8a
		//string ss("slowo");
		//cout << ss;
		//size_t it = 0;
		//while (it < ss.size()) {
		//	ss[it] = 'x';
		//	it++;
		//}
		//cout << endl;
		//cout << ss;

// 3.7
		//string ss("slowo");
		//cout << ss;
		//for (char & s : ss) {
		//	s = 'x';
		//}
		//cout << endl;
		//cout << ss;

// 3.6
		//string ss("slowo");
		//cout << ss;
		//for (auto& s : ss) {
		//	s = 'x';
		//}
		//cout << endl;
		//cout << ss;

}