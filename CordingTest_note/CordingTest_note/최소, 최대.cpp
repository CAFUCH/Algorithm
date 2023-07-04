//#include <iostream>
//using namespace std;
//
//int main() {
// //https://www.acmicpc.net/problem/10818
//	int n;
//
//	cin >> n;
//
//	int* m = new int[n];
//
//	for (int i = 0; i < n; ++i)
//		cin >> m[i];
//
//	int min = m[0];
//	int max = m[0];
//	
//	for (int i = 0; i < n; ++i) {
//
//		if (min < m[i])
//			min = m[i];
//		if (max > m[i])
//			max = m[i];
//	}
//
//	cout << max << " " << min;
//}