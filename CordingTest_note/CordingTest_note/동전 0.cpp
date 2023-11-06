//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	// https://www.acmicpc.net/problem/11047
//
//	int n, k, a;
//	vector<int> arr;
//	int anw = 0;
//
//	cin >> n >> k;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> a;
//		arr.push_back(a);
//	}
//
//	for (int i = arr.size() - 1; i >= 0; --i) {
//
//		if (arr[i] > k)
//			continue;
//
//		while (true) {
//
//			k -= arr[i];
//			anw++;		
//			if (arr[i] > k)
//				break;
//		}
//
//		if (k == 0)
//			break;
//	}
//
//	cout << anw;
//}