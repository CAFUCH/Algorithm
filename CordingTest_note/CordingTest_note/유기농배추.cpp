//#include <iostream>
//#include <vector>
//using namespace std;
//
//int t, n, m, k, a, b;
//vector<vector<int>> board;
//vector<vector<int>> visited;
//
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, -1, 1 };
//
//void DFS(int x, int y) {
//
//    visited[y][x] = 1;
//
//    for (int i = 0; i < 4; ++i) {
//
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//
//        if (nx < 0 || nx >= m || ny < 0 || ny >= n)
//            continue;
//
//        if (board[ny][nx] == 1 && visited[ny][nx] == 0)
//            DFS(nx, ny);
//    }
//};
//
//int main() {
//    //https://www.acmicpc.net/problem/1012
//
//    cin >> t;
//
//    while (t--) {
//
//        board.resize(51, vector<int>(51, 0));
//        visited.resize(51, vector<int>(51, 0));
//
//        int num = 0;
//
//        cin >> m >> n >> k;
//
//        for (int i = 0; i < k; ++i) {
//
//            cin >> a >> b;
//            board[b][a] = 1;
//        }
//
//        for (int i = 0; i < n; ++i) {
//
//            for (int j = 0; j < m; ++j) {
//
//                if (board[i][j] == 1 && visited[i][j] == 0) {
//
//                    DFS(j, i);
//                    num++;
//                }
//            }
//        }
//
//        cout << num << '\n';
//
//        board.clear();
//        visited.clear();
//    }
//}