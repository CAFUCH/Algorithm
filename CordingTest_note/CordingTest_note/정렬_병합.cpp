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
//		p1 = left; // ���ĵ� ���� �迭�� ���� �ε��� //1
//		p2 = mid + 1; // ���ĵ� ������ ����Ʈ�� ���� �ε��� //2, 3
//		p3 = left; // �պ��� ����Ʈ�� ���� �ε��� //1
//
//		//�������ĵ� �迭�� �պ�
//		while (p1 <= mid && p2 <= right) { //p1, p2 �� �� ������ sorted�� �ִ´�
//
//			if (a[p1] > a[p2]) sorted[p3++] = a[p2++]; //left > right //sorted[1] = right;
//			else sorted[p3++] = a[p1++];
//		}
//		 //���� �ִ� ���� �迭 �ϰ� ����
//		while (p1 <= mid) sorted[p3++] = a[p1++]; //
//
//		 //���� �ִ� ������ �迭 �ϰ� ����
//		while (p2 <= right) sorted[p3++] = a[p2++];
//		
//		//�迭 sorted�� �迭 a�� �纹��
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
