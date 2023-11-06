//#include <iostream>
//#include <sstream>
//#include <unordered_map>
//using namespace std;
//
//int main() {
//	// https://www.acmicpc.net/problem/9375
//
//	int t, n, answer = 1;
//	string s1, s2;
//	stringstream ss;
//
//	unordered_map<string, int> map;
//
//	cin >> t;
//
//	while (t--) {
//
//		map.clear();
//		answer = 1;
//		cin >> n;
//		
//		for (int i = 0; i < n; ++i) {
//
//			cin >> s1 >> s2;
//			map[s2]++;
//		}
//
//		for (auto m : map)
//			answer *= m.second + 1;
//
//		cout << answer - 1 << '\n';
//	}
//}