////#include <iostream>
////#include <vector>
////#include <queue>
////#include <algorithm>
////using namespace std;
////
////int main() {
////	//https://www.acmicpc.net/problem/18352
////
////	int n, m, k, x, num = 0;
////	int start, end;
////
////	cin >> n >> m >> k >> x;
////
////	vector<int> visited;
////	visited.resize(n + 1, -1);
////
////	vector<vector<int>> arr;
////	arr.resize(n + 1);
////
////	vector<int> answer;
////
////	queue<int> q;
////
////	for (int i = 0; i < m; ++i) {
////
////		cin >> start >> end;
////		arr[start].push_back(end); // 열, 행 기준으로 길이 존재한다
////	}
////
////	q.push(x);
////	visited[x] = 0;
////
////	while (!q.empty()) {
////
////		int now = q.front(); // x
////		q.pop();
////
////		for (int i = 0; i < arr[now].size(); ++i) {
////
////			if (visited[arr[now][i]] == -1) {
////
////				q.push(arr[now][i]);
////				visited[arr[now][i]] = visited[now] + 1;
////
////				if (visited[arr[now][i]] == k)
////					answer.push_back(arr[now][i]);
////			}
////		}
////	}
////
////	sort(answer.begin(), answer.end());
////
////	if (answer.empty())
////		cout << -1;
////	else {
////
////		for (auto n : answer)
////			cout << n << "\n";
////	}
////}
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int main() {
//
//	int n, m, k, x;
//	int start, end, now;
//
//	cin >> n >> m >> k >> x;
//
//	vector<vector<int>> arr;
//	arr.resize(m + 1);
//
//	vector<int> visited;
//	visited.resize(m + 1, -1);
//
//	queue<int> q;
//
//	vector<int> answer;
//
//	for (int i = 0; i < m; ++i) {
//
//		cin >> start >> end;
//		arr[start].push_back(end);
//	}
//
//	q.push(x);
//	visited[x] = 0;
//
//	while (!q.empty()) {
//
//		now = q.front();
//		q.pop();
//
//		for (int i = 0; i < arr[now].size(); ++i) {
//
//			if (visited[arr[now][i]] == -1) {
//
//				q.push(arr[now][i]);
//				visited[arr[now][i]] = visited[now] + 1;
//
//				if (visited[arr[now][i]] == k)
//					answer.push_back(arr[now][i]);
//			}
//		}
//	}
//
//	sort(answer.begin(), answer.end());
//
//	if (answer.empty())
//		cout << -1;
//	else {
//
//		for (int n : answer)
//			cout << n << "\n";
//	}
//}