//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//int main() {
//	//https://www.acmicpc.net/problem/1620
//
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n, m;
//	cin >> n >> m;
//
//	map<string, int> map1;
//	map<int, string> map2;
//
//	string str;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> str;
//		map1.insert(make_pair(str, i + 1));
//		map2.insert(make_pair(i + 1, str));
//	}
//
//	for (int i = 0; i < m; ++i) {
//
//		cin >> str;
//
//		if (isdigit(str[0]))
//			cout << map2.find(stoi(str))->second << '\n';
//		else
//			cout << map1.find(str)->second << '\n';
//	}
//}