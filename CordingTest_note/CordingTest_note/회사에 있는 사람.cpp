//#include <iostream>
//#include <set>
//using namespace std;
//
//int main() {
//	// https://www.acmicpc.net/problem/7785
//
//	int n;
//	string s1, s2;
//	set<string, greater<string>> set;
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> s1 >> s2;
//		
//		if (s2 == "enter")
//			set.insert(s1);
//		else
//			set.erase(set.find(s1));
//	}
//
//	for (auto s : set)
//		cout << s << '\n';
//}