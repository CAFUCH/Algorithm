//#include <iostream>
//#include <map>
//using namespace std;
//
//int main() {
//	//https://www.acmicpc.net/problem/1302
//
//	int n;
//	cin >> n;
//
//	map<string, int> m;
//
//	string str;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> str;
//
//		if (m.find(str) != m.end())
//			m.find(str)->second++;
//		else
//			m.insert(make_pair(str, 1));
//	}
//
//	n = 0;
//
//	for (auto iter = m.begin(); iter != m.end(); ++iter) {
//
//		if (n < iter->second){
//
//			n = iter->second;
//			str = iter->first;
//		}
//	}
//
//	cout << str;
//}