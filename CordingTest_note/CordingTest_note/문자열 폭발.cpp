//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
// https://www.acmicpc.net/problem/9935
//
//    ios::sync_with_stdio(false);
//
//    string str, bomb, ans, check;
//    int n = 0;
//
//    cin >> str >> bomb; // abaabcdbcdcd abcd
//
//    for (int i = 0; i < str.size(); i++) { // �Է� ���� ���� ���̸�ŭ �ݺ�
//
//        ans += str[i]; // ans�� �� ���ھ� ���ʴ�� �־��ش�
//
//        if (str[i] == bomb.back() && ans.size() >= bomb.size()) { // ���� ans�� bomb�� �ǽɵǴ� ���ڿ��� �� �ִٸ�
//
//            check = ""; // check �ʱ�ȭ
//            n = 0; // n �ʱ�ȭ (bomb �˻縦 ���� �ε���)
//
//            for (int j = ans.length() - bomb.length(); j < ans.length(); ++j) { // ans�� �� ������ bomb ũ�⸸ŭ ������ ��� �˻��Ѵ�
//
//                if (ans[j] == bomb[n]) { // ���ٸ� (ex. ans -> ababcd���� j -> a���� ����)
//
//                    check.push_back(ans[j]); // check�� �־��ش�
//                    n++; // n++
//                }
//                else // ���� �� ���̶� �ٸ��ٸ� ���� ���ڿ��� �� ���� �ʱ� ������ break�Ͽ� �����ش�.
//                    break;
//
//                if (check == bomb) { // check�� bomb�� ���ٸ� (str �ȿ� ���� ���ڿ��� �� �ִٸ�)
//
//                    ans.erase(ans.length() - bomb.length()); // j�� ���� ��ġ���� ������(a ~ d)
//                    break;
//                }
//            }
//        }
//    }
//
//    if (ans == "") // �� ������ �� ans�� ��� �ִٸ� (���ڿ��� ���� ����)
//        cout << "FRULA";
//    else // ans�� ���� �ִٸ� (���߿��� ��Ƴ��� ���ڿ�)
//        cout << ans; // ���
//}