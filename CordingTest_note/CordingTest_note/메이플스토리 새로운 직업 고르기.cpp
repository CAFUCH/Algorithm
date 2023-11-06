//#include <iostream>
//#include <set>
//using namespace std;
//
//int main() {
//	// https://nypc.github.io/2023/round1_1
//	int n, m;
//	string t;
//	set<string> s;
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> t;
//		s.insert(t);
//	}
//
//	cin >> m;
//
//	for (int i = 0; i < m; ++i) {
//
//		cin >> t;
//		if (s.find(t) != s.end()) {
//
//			n--;
//			s.erase(t);
//		}
//	}
//
//	cout << n << '\n';
//	for (auto i = s.begin(); i != s.end(); ++i)
//		cout << *i << '\n';
//}