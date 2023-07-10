//#include <iostream>
//#include <string>
//#include <math.h>
//using namespace std;
//
//int main() {
// //https://www.acmicpc.net/problem/26711
// 
//	string n, m, ans = { };
//	int temp, carry = 0;
//
//	cin >> n >> m;
//
//	while (n.length() != m.length()) {
//
//		if (n.length() > m.length())
//			m.insert(0, "0");
//		else
//			n.insert(0, "0");
//	}
//
//	if (n.length() == m.length()) { // 길이가 같다면
//
//		for (int i = n.length() - 1; i >= 0; --i) {
//
//			temp = n[i] - '0' + m[i] - '0' + carry; // 더하기
//
//			if (temp >= 10) {
//
//				temp -= 10;
//				carry = 1;
//			}
//			else
//				carry = 0;
//		
//			//temp = temp % 10;
//			//carry = temp / 10;
//
//			ans.insert(0, to_string(temp)); // 넣기
//		}
//
//		if (carry > 0)
//			ans.insert(0, to_string(carry));
//	}
//
//	cout << ans;
//}