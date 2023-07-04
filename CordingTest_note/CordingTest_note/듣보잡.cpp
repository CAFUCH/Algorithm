//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//
//int main() {
//	// https://www.acmicpc.net/problem/1764
//
//	int n, m, cnt = 0;
//	cin >> n >> m;
//
//	map<string, int> map;
//
//	string str;
//
//	vector<string> v;
//
//	for (int i = 0; i < n + m; ++i) {
//
//		if (map.find(str) != map.end())
//			map.find(str)->second++;
//		else
//			map.insert(make_pair(str, 1));
//	}
//
//	n = 0;
//
//	for (auto iter = map.begin(); iter != map.end(); ++iter) {
//		
//		if (n == iter->second)
//			v.push_back(iter->first);
//		else if (n < iter->second){
//	
//			n = iter->second;
//			str = iter->first;
//		}
//	}
//}