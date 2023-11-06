//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    // https://www.acmicpc.net/problem/11725
//
//    int n, a, b;
//
//    cin >> n;
//
//    vector<vector<int>> arr(n + 1);
//    vector<int> visited(n + 1, -1);
//    queue<int> q;
//
//    for (int i = 1; i < n; ++i)
//    {
//        cin >> a >> b;
//        arr[a].push_back(b);
//        arr[b].push_back(a);
//    }
//
//    q.push(1);
//
//    while (!q.empty())
//    {
//        int now = q.front();
//        q.pop();
//
//        for (int i = 0; i < arr[now].size(); ++i)
//        {
//            if (visited[arr[now][i]] != -1)
//                continue;
//
//            visited[arr[now][i]] = now;
//            q.push(arr[now][i]);
//        }
//    }
//
//    for (int i = 2; i < visited.size(); ++i)
//        cout << visited[i] << '\n';
//}