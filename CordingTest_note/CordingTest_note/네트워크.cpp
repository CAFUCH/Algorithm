//#include <iostream>
//#include <vector>
//using namespace std;
// https://school.programmers.co.kr/learn/courses/30/lessons/43162
//
//int num = 0;
//vector<int> visited (200);
//vector<vector<int>> arr;
//
//void DFS(int v) {
//
//    visited[v] = 1;
//    
//    for (int i = 0; i < num; ++i) {
//
//        if (arr[v][i] == 1 && visited[i] == 0) {
//
//            DFS(i);
//        }
//    }
//}
//
//int solution(int n, vector<vector<int>> computers) {
//
//    int answer = 0;
//
//    num = n;
//    arr = computers;
//
//    for (int i = 0; i < num; ++i) {
//
//        if (visited[i] == 0) {
//
//            DFS(i);
//            answer++;
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    cout << solution(3, { {1, 1, 0}, {1, 1, 0}, {0, 0, 1} });
//}