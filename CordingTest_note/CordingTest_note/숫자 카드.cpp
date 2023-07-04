//#include <iostream>
//#include <unordered_set>
//using namespace std;
//
//int main() {
//	//https://www.acmicpc.net/problem/10815
//
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	unordered_set<int> un_set;
//
//	int n, m;
//	
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//
//		cin >> m;
//		un_set.insert(m);
//	}
//
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//
//		cin >> m;
//		if (un_set.find(m) != un_set.end())
//			cout << "1 ";
//		else
//			cout << "0 ";
//	}
//}