//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main() { //https://www.acmicpc.net/problem/3986
//
//	int n;
//	int cnt = 0;
//
//	string arr;
//
//	cin >> n;
//
//	while (n--) {
//
//		stack<char> s;
//
//		cin >> arr;
//
//		for (int i = 0; i < arr.size(); ++i) {
//			
//			if (!s.empty() && s.top() == arr.at(i)) //�ɸ� �� ���ٸ�
//				s.pop();
//			else
//				s.push(arr.at(i));
//		}
//
//		if (s.empty()) //�ɸ� �� ���ٸ�?
//			cnt++;
//	}
//
//	cout << cnt;
//}