//#include <iostream>
//using namespace std;
//
//int main() {
//	// https://www.acmicpc.net/problem/2562
//
//	int a, idx = 1;
//	int* arr = new int[10];
//	int max = 0;
//
//	for (int i = 0; i < 9; ++i) {
//
//		cin >> a;
//		arr[i] = a;
//
//		if (max < arr[i]) {
//
//			max = arr[i];
//			idx = i + 1;
//		}
//	}
//
//	cout << max << '\n' << idx;
//}