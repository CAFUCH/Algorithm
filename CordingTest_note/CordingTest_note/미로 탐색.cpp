//#include <iostream>
//#include <queue>
//using namespace std;
//
//string arr[101];
//int visited[101][101];
//queue<pair<int, int>> q;
//
//int dx[] = { 1, 0, -1, 0 };
//int dy[] = { 0, 1, 0, -1 };
//
//int col, row;
//
//void BFS(int x, int y) {
//
//	visited[x][y] = 1;
//	// 방문 체크
//	q.push({ x, y });
//	// q에 넣기
//
//	while (!q.empty())
//	{
//		int x = q.front().first;
//		// 현재 정점의 x값
//		int y = q.front().second;
//		// 현재 정점의 y값
//		q.pop();
//		// 빼주고
//
//		for (int i = 0; i < 4; ++i) { // 위 아래 왼 오 4방향 검사
//
//			int nx = x + dx[i];
//			// 현재의 x 값에 ?를 더한다 (=특정 방향으로 한 칸 이동)
//			int ny = y + dy[i];
//			// 걍 오 아래 왼 위 순서대로 4방향 검사 하는 거,, 아매두??
//
//			if (nx >= col || ny >= row || nx < 0 || ny < 0) // 맵 밖으로 안 나가도록?,,
//				continue;
//
//			if (arr[nx][ny] == '1' && visited[nx][ny] == 0) { // 현재 이동 위치가 길이면서 방문 아니라면
//
//				q.push({ nx, ny }); // 겟!
//				visited[nx][ny] = visited[x][y] + 1; // 간선을 몇 개 지나왔는지?
//			}
//		}
//	}
//}
//
//int main() {
//	//https://www.acmicpc.net/problem/2178
//	
//	int n, m;
//
//	cin >> n >> m;
//	col = n;
//	row = m;
//
//	for (int i = 0; i < n; ++i)
//		cin >> arr[i];
//
//	BFS(0, 0);
//
//	cout << visited[n - 1][m - 1]; // 최단 거리 출력
//}