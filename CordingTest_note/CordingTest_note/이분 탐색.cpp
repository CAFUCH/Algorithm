//#include <iostream>;
//#include <vector>;
//using namespace std;
//
//void BinarySearch(vector<int>& age) {
//
//	int left, mid, right;
//	string str;
//
//	left = 0;
//	right = age.size() - 1; // �ε����� �� �� ��?
//
//	while (left != right)
//	{
//		mid = left + right / 2; // �߰��� ���� �ޱ�
//
//		cout << age[mid] << "�� �Դϱ�? : ";
//		cin >> str;
//
//		if (str == "YES") {
//
//			cout << "WOW~!!";
//			break;
//		}
//		else if (str == "UP")
//			left = mid + 1;
//		else if (str == "DOWN")
//			right = mid - 1;
//		else
//			cout << "����� �Է��ϼ���." << '\n';
//	}
//	cout << "����� ���̸� �ӿ����ϴ�.";
//	return;
//}
//
//int main() {
//
//	vector<int> age;
//	int min, max;
//
//	cout << "������ �ּڰ�, �ִ밪 �Է� : ";
//	cin >> min >> max;
//
//	for (int i = min; i < max; ++i) {
//
//		age.push_back(i);
//	}
//
//	cout << "���̰� �´ٸ� YES, �� ���ٸ� UP, �� ���ٸ� DOWN�� �Է��ϼ���." << endl;
//	BinarySearch(age);
//}