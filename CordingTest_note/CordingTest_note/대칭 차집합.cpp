//#include <iostream>
//#include <set>
//using namespace std;
//
//int main() {
// https://www.acmicpc.net/problem/1269
//    set<int> s;
//
//    int n, m, num;
//
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//
//        cin >> num;
//        s.insert(num);
//    }
//
//    for (int i = 0; i < m; i++) {
//
//        cin >> num;
//
//        if (s.find(num) == s.end()) // 없으면 추가하고 -> 아래 기준의 차집합
//            s.insert(num);
//
//        else // 있으면 뺀다.. -> 공지ㅂ합 뺌
//            s.erase(num);
//    } // 두 개 다 해당 안되면 걍 가만히 있는데 그럼 위 기준의 차집합
//
//    cout << s.size();
//}