//#include <iostream>
//using namespace std;
//
//int main() {
//	//https://www.acmicpc.net/problem/10813
//
//	int n, m, temp, v, w;
//
//	cin >> n >> m;
//
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < m; ++i) {
//
//		cin >> v >> w;
//
//		temp = arr[v - 1];
//		arr[v - 1] = arr[w - 1];
//		arr[w - 1] = temp;
//	}
//		
//	for (int i = 0; i < n; ++i)
//		cout << arr[i] << " ";
//}