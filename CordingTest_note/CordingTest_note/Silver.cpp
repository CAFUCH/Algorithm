//#include <iostream>
//using namespace std;
//
//int main() { //주몽
//
//	int n, m;
//	int s = 0;
//	int cnt = 0;
//	int cnt2 = 0;
//
//	cin >> n >> m;
//
//	int* arr = new int[n]();
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; ++i) { // 2 6 4 1 5 3
//
//		if (s < m) {
//			s += arr[i];
//			cnt2++;
//		}
//
//		if (s == m) {
//
//			s = 0;
//			++cnt;
//		}
//
//		if (s > m) {
//
//			s = 0;
//			i -= cnt2;
//		}
//
//		cout << i << " 현재 순서" << endl;
//	}
//
//	cout << cnt;
//}