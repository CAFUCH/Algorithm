//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//#define MAX_VTXS 256
//
//namespace NOVECTOR
//{
//    class AdjMatGraph
//    {
//    protected:
//
//        int size;                      // 정점의 개수
//        char vertices[MAX_VTXS];      // 정점의 이름
//        int adj[MAX_VTXS][MAX_VTXS]; // 인접 행렬
//
//        bool visited[50];
//
//    public:
//
//        AdjMatGraph() { reset(); } // 초기화
//
//        char getVertex(int i) { return vertices[i]; }
//        int getEdge(int i, int j) { return adj[i][j]; }
//
//        void setEdge(int i, int j, int val) { adj[i][j] = val; }
//
//        bool isEmpty() { return size == 0; }
//        bool isFull() { return size >= MAX_VTXS; }
//
//        void reset()
//        {
//            size = 0;
//
//            for (int i = 0; i < MAX_VTXS; i++)
//                for (int j = 0; j < MAX_VTXS; j++)
//                    setEdge(i, j, 0);
//        }
//
//
//        void insertVertex(char name)
//        {
//            if (!isFull())
//                vertices[size++] = name;
//        }
//
//        void insertEdge(int u, int v)
//        {
//            setEdge(u, v, 1);
//            setEdge(v, u, 1);
//        }
//
//        void display()
//        {
//            cout << "  ";
//
//            for (int i = 0; i < size; i++)
//                cout << getVertex(i) << " ";
//            cout << endl;
//
//            for (int i = 0; i < size; i++)
//            {
//                cout << getVertex(i);
//
//                for (int j = 0; j < size; j++)
//                    cout << getEdge(i, j) << " ";
//
//                cout << endl;
//            }
//        }
//    };
//}
//
//namespace USEVECTOR
//{
//    class AdjMatGraph
//    {
//    protected:
//
//        int size;
//        vector<char> vertices;
//
//        vector<vector<int>> adj; // 중요!
//
//        int visited[MAX_VTXS]; // 정점의 방문 정보
//
//    public:
//
//        AdjMatGraph() { reset(); }
//        AdjMatGraph(int n) { reset(n); }
//
//        char getVertex(int i) { return vertices[i]; }
//        int getEdge(int i, int j) { return adj[i][j]; }
//
//        void setEdge(int i, int j, int val)
//        {
//            adj[i][j] = val;
//        }
//
//        bool isEmpty() { return size == 0; }
//        bool isFull() { return size >= MAX_VTXS; }
//        void reset()
//        {
//            size = 0;
//
//            for (int i = 0; i < MAX_VTXS; i++)
//            {
//                for (int j = 0; j < MAX_VTXS; j++)
//                {
//                    setEdge(i, j, 0);
//                    setEdge(j, i, 0);
//                }
//            }
//        }
//
//        void reset(int n)
//        {
//            size = 0;
//
//            vertices.resize(n);
//            adj.resize(n);
//            for (int i = 0; i < n; i++)
//            {
//                adj[i].resize(n);
//                for (int j = 0; j < n; j++)
//                    setEdge(i, j, 0);
//            }
//        }
//
//        void insertVertex(char name)
//        {
//            if (!isFull())
//                vertices[size++] = name;
//        }
//
//        void insertEdge(int u, int v)
//        {
//            setEdge(u, v, 1);
//            setEdge(v, u, 1);
//        }
//
//        void display()
//        {
//            cout << "  ";
//
//            for (int i = 0; i < size; i++)
//                cout << getVertex(i) << " ";
//
//            cout << endl;
//
//            for (int i = 0; i < size; i++)
//            {
//                cout << getVertex(i) << " ";
//
//                for (int j = 0; j < size; j++)
//                    cout << getEdge(i, j) << " ";
//
//                cout << endl;
//            }
//        }
//
//        void resetVisited() { // 걍 초기화
//
//            for (int i = 0; i < size; i++)
//                visited[i] = false;
//        }
//
//        bool isLinked(int u, int v) { // 찾은 위치가 선이 있는지?
//
//            return getEdge(u, v) != 0;
//        }
//
//        void DFS(int v) {
//
//            // 방문했다고 표시
//            cout << v << " ";
//            visited[v] = true; // 방문 햇구여
//
//            // v와 연결되어 있으면서 방문이 안 된 애들 다시 방문
//            for (int i = 0; i < size; i++) // 모든 정점을 ㄹ돌고?
//            {
//                if (isLinked(v, i) && !visited[i]) // 이어진 정점이 있으면서? 방문하지 않앗다면
//                    DFS(i); // 조아여 ^&^ 더 도세요
//            }
//        }
//
//        void BFS(int v) {
//
//            fill_n(visited, MAX_VTXS, -1);
//
//            cout << v << " ";
//            queue<int> q;
//
//            visited[v] = 0; // 방문요
//            q.push(v); // 어서오고
//
//            while (!q.empty()) { // 아직 안 끝났지?
//
//                int temp = q.front(); // 어 확인용 어서오고
//                q.pop(); // 잘가시고
//
//                for (int i = 0; i < size; ++i) { // 모든 정ㅈ머 돌자
//
//                    if (isLinked(temp, i) && visited[i] == -1) { // 너 내가 고른 애랑 친하냐? 근데 여기 처음?
//
//                        q.push(i); // 어 환영이야 ^^
//                        cout << i << " "; 
//                        visited[i] = visited[temp] + 1;
//                    }
//                }
//            }
//
//            cout << endl;
//            
//            for (auto i : visited) {
//
//                if (i != -1)
//                    cout << i << " ";
//            }
//        }
//    };
//}
//
//// 0 1 2 1
//// 0 1 3 2
//
//int main()
//{
//    int n, m, temp1, temp2;
//
//    cout << "정점의 개수와 간선의 수 :";
//    cin >> n >> m;
//    cout << "간선의 시작정점과 끝 정점 :" << endl;
//
//    //NOVECTOR::AdjMatGraph g;
//    USEVECTOR::AdjMatGraph g(n);
//
//    for (int i = 0; i < n; i++)
//        g.insertVertex('A' + i);
//
//    for (int i = 0; i < m; i++)
//    {
//        cin >> temp1 >> temp2;
//
//        g.insertEdge(temp1, temp2);
//    }
//
//    cout << "인접 행렬로 표현한 그래프" << endl;
//
//    g.display();
//
//    g.resetVisited();
//
//    cout << "BFS 탐색 => ";
//
//    //g.DFS(0);
//    g.BFS(0);
//
//    return 0;
//}