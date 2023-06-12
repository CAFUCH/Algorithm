//#include <iostream>
//using namespace std;
//
//#pragma region "merge"
//
//int a[101], sorted[101];
//
//void merge(int left, int right) {
//
//	int mid;
//	int p1, p2, p3;
//
//	if (left < right) {
//
//		mid = (left + right) / 2; //1, 2 = 1 // 1, 3 = 2
//		merge(left, mid); //1, 3 //1, 2 // 1, 2
//		merge(mid + 1, right); //4, 5 //4, 5,,
//
//		p1 = left; // 정렬된 왼쪽 배열에 대한 인덱스 //1
//		p2 = mid + 1; // 정렬된 오른쪽 리스트에 대한 인덱스 //2, 3
//		p3 = left; // 합병될 리스트에 대한 인덱스 //1
//
//		//분할정렬된 배열의 합병
//		while (p1 <= mid && p2 <= right) { //p1, p2 중 더 작은걸 sorted에 넣는다
//
//			if (a[p1] > a[p2]) sorted[p3++] = a[p2++]; //left > right //sorted[1] = right;
//			else sorted[p3++] = a[p1++];
//		}
//		 //남아 있는 왼쪽 배열 일괄 복사
//		while (p1 <= mid) sorted[p3++] = a[p1++]; //
//
//		 //남아 있는 오른쪽 배열 일괄 복사
//		while (p2 <= right) sorted[p3++] = a[p2++];
//		
//		//배열 sorted를 배열 a로 재복사
//		for (int i = left; i <= right; i++) {
//			a[i] = sorted[i];
//		}
//	}
//}
//
//int main() {
//
//	int n, i;
//
//	cin >> n; //5
//
//	for (i = 1; i <= n; i++)
//		cin >> a[i];
//
//	merge(1, n); //1, 5
//
//	for (i = 1; i <= n; i++)
//		cout << a[i] << " ";
//
//	return 0;
//}
//#pragma endregion
