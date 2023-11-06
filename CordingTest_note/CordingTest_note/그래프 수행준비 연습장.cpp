//#include <iostream>
//#include <vector>
//#include <queue>
//#include <map>
//using namespace std;
//
////int t, n, m, k, a, b, ans;
////vector<vector<int>> arr;
////vector<vector<int>> visited;
////int dx[] = { 1, -1, 0, 0 };
////int dy[] = { 0, 0, 1, -1 };
////
////void DFS(int x, int y) {
////
////	visited[y][x] = 1;
////
////	for (int i = 0; i < 4; ++i) {
////
////		int nx = dx[i] + x;
////		int ny = dy[i] + y;
////
////		if (nx >= m || ny >= n || nx < 0 || ny < 0)
////			continue;
////
////		if (arr[ny][nx] == 1 && visited[ny][nx] == 0) {
////
////			DFS(nx, ny);
////		}
////	}
////}
////
////int main() {
////
////	cin >> t;
////
////	while (t--) {
////
////		cin >> m >> n >> k;
////		ans = 0;
////
////		arr.resize(n, vector<int>(m, 0));
////		visited.resize(n, vector<int>(m, 0));
////
////		for (int i = 0; i < k; ++i) {
////
////			cin >> a >> b;
////			arr[b][a] = 1;	
////		}
////
////		for (int i = 0; i < n; ++i) {
////
////			for (int j = 0; j < m; ++j) {
////
////				if (arr[i][j] == 1 && visited[i][j] == 0) {
////
////					DFS(j, i);
////					ans++;
////				}
////			}
////		}
////
////		cout << ans << '\n';
////	}
////} 
//
////int sum = 0;
////int tg, ans = 0;
////vector<int> arr;
////
////void DFS(int v, char sign, int s) {
////
////    if (sign == '+') {
////
////        s += arr[v];
////    }
////    else {
////
////        s -= arr[v];
////    }
////
////    if (v + 1 == arr.size()) {
////
////        if (s == tg)
////            ans++;
////        return;
////    }
////
////    DFS(v + 1, '+', s);
////    DFS(v + 1, '-', s);
////}
////
////int solution(vector<int> numbers, int target) {
////
////    arr = numbers;
////    tg = target;
////    DFS(0, '+', 0);
////    DFS(0, '-', 0);
////
////    return ans;
////}
////
////void main() {
////
////    cout << solution({ 1, 1, 1, 1, 1 }, 3);
////}
//
////int num = 0;
////vector<vector<int>> arr;
////vector<int> visited(200);
////
////void DFS(int v) {
////
////    visited[v] = 1;
////
////    for (int i = 0; i < num; ++i) {
////
////        if (arr[v][i] == 1 && visited[i] == 0) {
////
////            DFS(i);
////        }
////    }
////}
////
////int solution(int n, vector<vector<int>> computers) {
////
////    int answer = 0;
////
////    num = n;
////    arr = computers;
////
////    for (int i = 0; i < num; ++i) {
////
////        if (visited[i] == 0) {
////
////            DFS(i);
////            answer++;
////        }
////    }
////
////    cout << answer;
////    return answer;
////}
////
////void main() {
////
////    solution(3, { {1, 1, 0}, {1, 1, 0}, {0, 0, 1} });
////}
//
////int n, m, a;
////string arr[101];
////vector<vector<int>> visited;
////queue<pair<int, int>> q;
////int dx[] = { 1, -1, 0, 0 };
////int dy[] = { 0, 0, 1, -1 };
////
////void BFS(int x, int y) {
////
////	visited[y][x] = 1;
////	q.push({ x, y });
////
////	while (!q.empty())
////	{
////		int x = q.front().first;
////		int y = q.front().second;
////		q.pop();
////
////		for (int i = 0; i < 4; ++i) {
////
////			int nx = dx[i] + x;
////			int ny = dy[i] + y;
////
////			if (nx >= m || ny >= n || nx < 0 || ny < 0)
////				continue;
////
////			if (arr[ny][nx] == '1' && visited[ny][nx] == 0) {
////
////				visited[ny][nx] = visited[y][x] + 1;
////				q.push({ nx, ny });
////			}
////		}
////	}
////}
////
////void main() {
////
////	cin >> n >> m;
////
////	visited.resize(n, vector<int>(m, 0));
////
////	for (int i = 0; i < n; ++i) {
////
////		cin >> arr[i];
////	}
////
////	BFS(0, 0);
////
////	cout << visited[n - 1][m - 1];
////}
//
////vector<vector<int>> arr;
////vector<vector<int>> visited;
////queue<pair<int, int>> q;
////int dx[] = { 1, -1, 0, 0 };
////int dy[] = { 0, 0, 1, -1 };
////
////void BFS(int x, int y) {
////
////    visited[y][x] = 1;
////    q.push({ x, y });
////
////    while (!q.empty())
////    {
////        x = q.front().first;
////        y = q.front().second;
////        q.pop();
////
////        for (int i = 0; i < 4; ++i) {
////
////            int nx = dx[i] + x;
////            int ny = dy[i] + y;
////
////            if (nx >= arr[0].size() || ny >= arr.size() || nx < 0 || ny < 0)
////                continue;
////            if (arr[ny][nx] == 1 && visited[ny][nx] == 0) {
////
////                visited[ny][nx] = visited[y][x] + 1;
////                q.push({ nx, ny });
////            }
////        }
////    }
////}
////
////int solution(vector<vector<int> > maps)
////{
////    int answer = 0;
////
////    arr = maps;
////    visited.resize(arr.size(), vector<int>(arr[0].size(), 0));
////
////    BFS(0, 0);
////    answer = visited[arr.size() - 1][arr[0].size() - 1];
////    return answer;
////}
//
////int n, m, k, x, a, b;
////vector<vector<int>> arr;
////vector<int> visited;
////queue<int> q;
////vector<int> ans;
////
////void BFS(int v) {
////
////	visited[v] = 0;
////	q.push(v);
////
////	while (!q.empty())
////	{
////		int now = q.front();
////		q.pop();
////
////		for (int i = 0; i < arr[now].size(); ++i) {
////
////			if (visited[arr[now][i]] == -1) {
////
////				visited[arr[now][i]] = visited[now] + 1;
////				q.push(arr[now][i]);
////
////				if (visited[arr[now][i]] == k) {
////
////					ans.push_back(arr[now][i]);
////				}
////			}
////		}
////	}
////}
////
////void main() {
////
////	cin >> n >> m >> k >> x;
////
////	arr.resize(m + 1);
////	visited.resize(m + 1, -1);
////
////	for (int i = 0; i < m; ++i) {
////
////		cin >> a >> b;
////		arr[a].push_back(b);
////	}
////
////	BFS(x);
////
////	sort(ans.begin(), ans.end());
////
////	if (ans.empty())
////		cout << -1;
////	else {
////
////		for (int n : ans)
////			cout << n << "\n";
////	}
////}
//
////string now, _target;
////vector<string> arr;
////map<string, int> visited;
////queue<string> q;
////
////bool isLink(string a, string b) {
////
////    int cnt = 0;
////
////    for (int i = 0; i < a.length(); ++i) {
////
////        if (a[i] != b[i]) cnt++;
////    }
////
////    return cnt == 1;
////}
////
////int BFS(string begin) {
////
////    visited[begin];
////    q.push(begin);
////
////    while (!q.empty())
////    {
////        now = q.front();
////        q.pop();
////
////        for (int i = 0; i < arr.size(); ++i) {
////
////            if (visited.find(arr[i]) == visited.end() && isLink(now, arr[i])) {
////
////                q.push(arr[i]);
////                visited[arr[i]] = visited[now] + 1;
////
////                if (arr[i] == _target)
////                    return visited[arr[i]];
////            }
////        }
////    }
////
////    return 0;
////}
////
////int solution(string begin, string target, vector<string> words) {
////
////    int answer = 0;
////
////    arr = words;
////    _target = target;
////    cout << BFS(begin);
////
////    return answer;
////}
////
////int main() {
////
////    solution("hit", "cog", { "hot", "dot", "dog", "lot", "log", "cog" });
////}