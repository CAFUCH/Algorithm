//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() { //https://www.acmicpc.net/problem/25192
//
//	int n, idx = 0, cnt = 0;
//
//	cin >> n;
//
//	string* arr = new string[n];
//
//	for (int i = 0; i < n; ++i)
//		cin >> arr[i];
//
//	for (int i = 0; i < n; ++i) {
//
//		if (arr[i] == "ENTER") //ENTER�� �ԷµǸ� �˻��ϴ� index�� �ʱⰪ�� ����ش�.
//			idx = i + 1;
//
//		else if (arr[i] != "ENTER") { //�̸� �̶��
//
//			for (int j = idx; j < n; ++j) {
//
//
//				if (arr[j] == "ENTER")
//					break;
//				else if (arr[i] == arr[j] && i != j) {
//					cout << arr[i] << " " << arr[j] << endl;
//					break;
//				}
//				cout << arr[i] << " " << arr[j] << "�зȴ�" << endl;
//				cnt++;
//			}
//		}
//	}
//
//	cout << cnt;
//}