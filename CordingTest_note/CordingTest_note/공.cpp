//#include <iostream>
//using namespace std;
//
//int main() {
//	//https://www.acmicpc.net/problem/1547
//
//	int n, m, o, temp;
//	int arr[3] = { 1, 2, 3 };
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> m >> o;
//
//		temp = arr[m - 1];
//		arr[m - 1] = arr[o - 1];
//		arr[o - 1] = temp;
//	}
//	
//	for (int i = 0; i < 3; ++i) {
//
//		if (arr[i] == 1)
//			cout << i + 1;
//	}
//}