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
//        if (s.find(num) == s.end()) // ������ �߰��ϰ� -> �Ʒ� ������ ������
//            s.insert(num);
//
//        else // ������ ����.. -> �������� ��
//            s.erase(num);
//    } // �� �� �� �ش� �ȵǸ� �� ������ �ִµ� �׷� �� ������ ������
//
//    cout << s.size();
//}