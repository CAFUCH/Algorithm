//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	// https://www.acmicpc.net/problem/11170
//
//	int n, a, b = 0;
//	vector<int> start, stop;
//	string arr;
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> a >> b;
//		start.push_back(a);
//		stop.push_back(b);
//
//		int sum = 0;
//
//		for (int j = start[i]; j <= stop[i]; ++j) {
//
//			arr = j;
//
//			for (int k = 0; k < arr.length(); ++k) {
//
//				if (arr[k] == 0)
//					sum++;
//			}
//		}
//
//		cout << sum;
//	}
//}