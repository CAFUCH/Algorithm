//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	// https://www.acmicpc.net/problem/10816
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	vector<int> v;
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> m;
//		v.push_back(m);
//	}
//
//	sort(v.begin(), v.end());
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> m;
//		cout << upper_bound(v.begin(), v.end(), m) - lower_bound(v.begin(), v.end(), m)<< " ";
//	}
//}