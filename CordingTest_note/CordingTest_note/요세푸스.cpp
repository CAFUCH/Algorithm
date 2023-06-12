//#include <iostream>
//#include <list>
//using namespace std;
//
//int main() {
// //https://www.acmicpc.net/problem/1158
//
//	int n, m;
//
//	cin >> n >> m;
//
//	list<int> ls;
//
//	for (int i = 0; i < n; ++i)
//		ls.push_back(i + 1);
//
//	list<int>::iterator ls_top = ls.begin();
//
//	cout << '<';
//	while (n > 0) {
//
//		for (int i = 1; i < m; ++i) {
//
//			ls_top++;
//
//			if (ls_top == ls.end()) ls_top = ls.begin();
//		}
//		
//		if (n == 1) {
//
//			cout << *ls_top;
//			break;
//		}
//
//		cout << *ls_top << ", ";
//		ls_top = ls.erase(ls_top);
//		n--;
//		if (ls_top == ls.end()) ls_top = ls.begin();
//	}
//	cout << '>';
//}