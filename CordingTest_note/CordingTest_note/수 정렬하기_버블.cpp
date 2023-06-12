//#include <iostream>
//using namespace std;
//
//int main() { 
// //https://www.acmicpc.net/problem/2750
//
//	int n, tmp;
//	int arr[1001];
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i)
//		cin >> arr[i];
//
//	for (int i = 0; i < n - 1; ++i) {
//
//		for (int j = 0; j < n - i - 1; ++j) {
//
//			if (arr[j] > arr[j + 1]) {
//
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; ++i)
//		cout << arr[i] << '\n';
//}