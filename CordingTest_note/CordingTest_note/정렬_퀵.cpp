//#include <iostream>
//using namespace std;
//
//#pragma region "quick" // ��
//int a[100];
//void quickSort(int start, int end) {
//
//	if (start >= end)//���Ұ� 1���� ��� 
//		return;
//
//	int key = start;	//Ű�� ù��° ����
//	int left = start + 1;	//���� ��� ���� 
//	int right = end;		//������ ��� ���� 
//	int temp;
//
//	while (left <= right) {	//������ ������ �ݺ� 
//
//		while (a[left] <= a[key] && left<=right) {	//Ű ������ ū ���� ���� ������ 
//			left++;
//		}
//		while (a[right] >= a[key] && right > start) {	//Ű ������ ���� ���� ���� ������ 
//			right--;
//		}
//		if (left >= right) {	//���� �����ų� ������ ���¸� Ű ���� ��ü
//			temp = a[right];
//			a[right] = a[key];
//			a[key] = temp;
//		}
//		else {		//�������� �ʾҴٸ� i�� j�� ��ü
//			temp = a[right];
//			a[right] = a[left];
//			a[left] = temp;	
//		}
//	}
//	quickSort(start, right - 1);
//	quickSort(right + 1, end);
//}
//
//int main() {
//	int n, i;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	quickSort(0, n-1);
//
//	for (i = 0; i < n; i++) {
//		cout << a[i] <<" ";
//	}
//	return 0;
//}
//#pragma endregion