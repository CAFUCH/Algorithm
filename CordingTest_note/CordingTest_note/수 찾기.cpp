//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, m, a;
//vector<int> arr;
//
//int BinarySearch(int num) {
//
//	int left = 0;
//	int right = n - 1;
//
//	while (left <= right) {
//
//		int mid = (left + right) / 2;
//
//		if (arr[mid] == num) {
//
//			return 1;
//		}
//		else if (arr[mid] < num)
//			left = mid + 1;
//
//		else if (arr[mid] > num)
//			right = mid - 1;
//	}
//
//	return 0;
//}
//
//int main() {
//	//https://www.acmicpc.net/problem/1920
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> a;
//		arr.push_back(a);
//	}
//
//	sort(arr.begin(), arr.end());
//
//	cin >> m;
//
//	for (int i = 0; i < m; ++i) {
//
//		cin >> a;
//		cout << BinarySearch(a) <<"\n";
//	}
//}