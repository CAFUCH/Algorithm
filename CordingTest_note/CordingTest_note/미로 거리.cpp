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
//	// �湮 üũ
//	q.push({ x, y });
//	// q�� �ֱ�
//
//	while (!q.empty())
//	{
//		int x = q.front().first;
//		// ���� ������ x��
//		int y = q.front().second;
//		// ���� ������ y��
//		q.pop();
//		// ���ְ�
//
//		for (int i = 0; i < 4; ++i) { // �� �Ʒ� �� �� 4���� �˻�
//
//			int nx = x + dx[i];
//			// ������ x ���� ?�� ���Ѵ� (=Ư�� �������� �� ĭ �̵�)
//			int ny = y + dy[i];
//			// �� �� �Ʒ� �� �� ������� 4���� �˻� �ϴ� ��,, �Ƹŵ�??
//
//			if (nx >= col || ny >= row || nx < 0 || ny < 0) // �� ������ �� ��������?,,
//				continue;
//
//			if (arr[nx][ny] == '1' && visited[nx][ny] == 0) { // ���� �̵� ��ġ�� ���̸鼭 �湮 �ƴ϶��
//
//				q.push({ nx, ny }); // ��!
//				visited[nx][ny] = visited[x][y] + 1; // ������ �� �� �����Դ���?
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
//	cout << visited[n - 1][m - 1]; // �ִ� �Ÿ� ���
//}