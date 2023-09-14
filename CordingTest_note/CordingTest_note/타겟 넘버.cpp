//#include <string>
//#include <vector>
//using namespace std;
//
//int sum = 0;
//int answer = 0;
//int m_target;
//vector<int> v;
//
//void DFS(int n, char sign, int s) {
//
//    if (sign == '+')
//        s += v[n];
//    else
//        s -= v[n];
//
//    if (n + 1 == v.size()) {
//
//        if (s == m_target)
//            answer++;
//
//        return;
//    }
//
//    DFS(n + 1, '+', s);
//    DFS(n + 1, '-', s);
//}
//
//int solution(vector<int> numbers, int target) {
//    //https://school.programmers.co.kr/learn/courses/30/lessons/43165
//
//    m_target = target;
//    v = numbers;
//
//    DFS(0, '+', 0);
//    DFS(0, '-', 0);
//
//    return answer;
//}
//
////int main() {
////
////    vector<int> v = { 1, 1, 1, 1, 1 };
////    solution(v, 3);
////}