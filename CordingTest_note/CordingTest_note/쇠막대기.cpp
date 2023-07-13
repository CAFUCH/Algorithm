//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	//https://www.acmicpc.net/problem/10799
//
//	string arr;
//	int cnt = 0;
//	int ans = 0;
//
//	cin >> arr;
//
//	for (int i = 0; i < arr.length(); ++i) {
//
//		if (arr[i] == '(') {
//
//			cnt++;
//		}
//		else if (arr[i] == ')') {
//
//			if (arr[i - 1] == '(') {
//
//				cnt--;
//				ans += cnt;
//			}
//			else {
//
//				cnt--;
//				ans++;
//			}
//		}
//	}
//	
//	cout << ans;
//}