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
//	right = age.size() - 1; // 인덱스로 할 거 라서?
//
//	while (left != right)
//	{
//		mid = left + right / 2; // 중간의 숫자 받기
//
//		cout << age[mid] << "살 입니까? : ";
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
//			cout << "제대로 입력하세요." << '\n';
//	}
//	cout << "당신은 나이를 속였습니다.";
//	return;
//}
//
//int main() {
//
//	vector<int> age;
//	int min, max;
//
//	cout << "나이의 최솟값, 최대값 입력 : ";
//	cin >> min >> max;
//
//	for (int i = min; i < max; ++i) {
//
//		age.push_back(i);
//	}
//
//	cout << "나이가 맞다면 YES, 더 많다면 UP, 더 적다면 DOWN을 입력하세요." << endl;
//	BinarySearch(age);
//}