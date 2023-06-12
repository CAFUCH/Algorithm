//#include <iostream>
//using namespace std;
//
//int arr[1000002], sorted[1000002];
//
//void merge(int left, int right) { // 백준에서 틀려다고함 여기선 잘 됨 ㅇㅇ
//	//https://www.acmicpc.net/problem/2751
//
//	int mid, p1, p2, sortDx;
//
//	if (left < right) {
//
//		mid = (left + right) / 2;
//		merge(left, mid);
//		merge(mid + 1, right);
//
//		p1 = left;
//		p2 = mid + 1;
//		sortDx = left;
//
//		while (p1 <= mid && p2 <= right) {
//
//			if (arr[p1] > arr[p2]) sorted[sortDx++] = arr[p2++];
//			else sorted[sortDx++] = arr[p1++];
//		}
//
//		while (p1 <= mid)
//			sorted[sortDx++] = arr[p1++];
//
//		while (p2 <= right)
//			sorted[sortDx] = arr[p2++];
//
//		for (int i = left; i <= right; ++i)
//			arr[i] = sorted[i];
//	}
//}
//
//int main() {
//
//	int n;
//
//	cin >> n;
//
//	for (int i = 1; i <= n; ++i)
//		cin >> arr[i];
//
//	merge(1, n);
//
//	for (int i = 1; i <= n; ++i)
//		cout << arr[i] << '\n';
//}