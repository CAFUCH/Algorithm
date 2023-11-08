//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	 https://www.acmicpc.net/problem/7795
//
//	int t, n, m, k, sum = 0;
//	vector<int> v1, v2;
//
//	cin >> t;
//
//	while (t--)
//	{
//		sum = 0;
//		v1.clear();
//		v2.clear();
//
//		cin >> n >> m;
//
//		for (int i = 0; i < n; ++i) {
//
//			cin >> k;
//			v1.push_back(k);
//		}
//
//		for (int i = 0; i < m; ++i) {
//
//			cin >> k;
//			v2.push_back(k);
//			
//		}
//
//		sort(v2.begin(), v2.end());
//
//		for (int i = 0; i < v1.size(); ++i) {
//
//			sum += lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin();
//		}
//
//		cout << sum << endl;
//	}
//}