//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main() {
//
//	int n, m;
//
//	cin >> n >> m;
//
//	queue<int> q;
//
//	for (int i = 0; i < n; ++i)
//		q.push(i + 1);
//
//	while (q.size() != 1) {
//
//		for (int i = 0; i < m - 1; ++i) {
//
//			int front = q.front();
//			q.pop();
//			q.push(front);
//		}
//
//		q.pop();
//	}
//
//	cout << q.back();
//}