//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//	string input;
//	string arr = "123456789";
//
//	int cnt = 1;
//
//	cin >> input;
//
//	//for (int i = 0; i < input.length(); ++i) { //1223456678
//
//	//	for (int j = 0; j < arr.length(); ++j) { //123456789
//
//	//		if (input.at(i) == arr.at(j)) { //11 22
//
//	//			arr.erase(j);
//	//		}
//	//		else if (input.at(i) == 6 || input.at(i) == 9) {
//
//	//			if (arr.at(j) == 6 || arr.at(j) == 9) {
//
//
//	//			}
//	//		}
//	//		else {
//
//	//			cnt++;
//	//		}
//	//	}
//	//}
//
//	//while (!input.length() == 0)
//	//{
//		for (int i = 0; i < arr.length(); ++i) {
//
//			cout << input.front() << " 현재 값" << endl;
//			cout << input.front() << " 현재 값" << endl;
//			if (input.front() == arr.at(i)) {
//				
//				cout << input.front() << " 같은 걸 찾았다" << endl;
//				input.erase(input.front());
//			}
//			else if (input.front() == 6 || input.front() == 9 && arr.at(i) == 6 || arr.at(i) == 9) {
//
//				cout << input.front() << " 6 9 예ㅗ이" << endl;
//				input.erase(input.front());
//			}
//			else {
//
//				cout << "증가" << endl;
//				cnt++;
//			}
//		}
//	//}
//
//	cout << cnt;
//
//	return 0;
//}