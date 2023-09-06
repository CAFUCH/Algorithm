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
//        int size;                      // ������ ����
//        char vertices[MAX_VTXS];      // ������ �̸�
//        int adj[MAX_VTXS][MAX_VTXS]; // ���� ���
//
//        bool visited[50];
//
//    public:
//
//        AdjMatGraph() { reset(); } // �ʱ�ȭ
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
//        vector<vector<int>> adj; // �߿�!
//
//        int visited[MAX_VTXS]; // ������ �湮 ����
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
//        void resetVisited() { // �� �ʱ�ȭ
//
//            for (int i = 0; i < size; i++)
//                visited[i] = false;
//        }
//
//        bool isLinked(int u, int v) { // ã�� ��ġ�� ���� �ִ���?
//
//            return getEdge(u, v) != 0;
//        }
//
//        void DFS(int v) {
//
//            // �湮�ߴٰ� ǥ��
//            cout << v << " ";
//            visited[v] = true; // �湮 �ޱ���
//
//            // v�� ����Ǿ� �����鼭 �湮�� �� �� �ֵ� �ٽ� �湮
//            for (int i = 0; i < size; i++) // ��� ������ ������?
//            {
//                if (isLinked(v, i) && !visited[i]) // �̾��� ������ �����鼭? �湮���� �ʾѴٸ�
//                    DFS(i); // ���ƿ� ^&^ �� ������
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
//            visited[v] = 0; // �湮��
//            q.push(v); // �����
//
//            while (!q.empty()) { // ���� �� ������?
//
//                int temp = q.front(); // �� Ȯ�ο� �����
//                q.pop(); // �߰��ð�
//
//                for (int i = 0; i < size; ++i) { // ��� ������ ����
//
//                    if (isLinked(temp, i) && visited[i] == -1) { // �� ���� �� �ֶ� ģ�ϳ�? �ٵ� ���� ó��?
//
//                        q.push(i); // �� ȯ���̾� ^^
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
//    cout << "������ ������ ������ �� :";
//    cin >> n >> m;
//    cout << "������ ���������� �� ���� :" << endl;
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
//    cout << "���� ��ķ� ǥ���� �׷���" << endl;
//
//    g.display();
//
//    g.resetVisited();
//
//    cout << "BFS Ž�� => ";
//
//    //g.DFS(0);
//    g.BFS(0);
//
//    return 0;
//}