//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main() { //https://www.acmicpc.net/problem/2161
//
//	int n;
//	
//	cin >> n;
//
//	queue<int> q;
//	queue<int> d;
//
//	for (int i = 0; i < n; ++i) {
//
//		q.push(i + 1);
//	}
//
//	while (q.size() > 1) {
//
//		d.push(q.front());
//		q.pop();
//		q.push(q.front());
//		q.pop();
//	}
//
//	while (!d.empty())
//	{
//		cout << d.front() << " ";
//		d.pop();
//	}
//
//	cout << q.front();
//}