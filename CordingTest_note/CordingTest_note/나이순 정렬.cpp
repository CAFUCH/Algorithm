//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	//https://www.acmicpc.net/problem/10814
//
//	int n;
//
//	cin >> n;
//
//	vector<pair<int, string>> member;
//
//	int age;
//	string name;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> age >> name;
//		member.push_back(make_pair(age, name));
//	}
//
//	stable_sort(member.begin(), member.end());
//	//sort(member.begin(), member.end());
//	
//	for (int i = 0; i < n; ++i) {
//
//		cout << member[i].first << " " << member[i].second << '\n';
//	}
//}