#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    string str, bomb, ans, check;
    int n = 0;

    cin >> str >> bomb;

    for (int i = 0; i < str.size(); i++) {

        ans += str[i]; // ä���?

        if (str[i] == bomb.back() && ans.size() >= bomb.size()) {

            check = ""; // check �ʱ�ȭ
            n = bomb.length() - 1;

            for (int j = ans.length() - 1; j >= 0; --j) { // �ڿ��� ���� �˻�

                if (ans[j] == bomb[n]) { // ���ٸ�

                    check.insert(0, (char*)ans[j]); // check�� ������ �־��༭ �������� ��������,,
                    //cout << ans[j] << " " << bomb[n] << " : " << check << endl;
                    //cout << j << " " << n << endl;
                    n--;
                }
                else { // Ʋ������

                    n = bomb.length() - 1; // �ʱ�ȭ
                    break;
                }

                if (check == bomb) { // bomb�� ���� ��Ȳ�� �´�?

                    cout << "���Ӥ���!!!!";
                    ans.erase(ans.at(j), ans.length() - 1); // ����� ������.
                    break;
                }
            }
        }

        cout << "1 : " << ans << endl;
    }

    if (ans == "")
        cout << "FRULA";
    else
        cout << ans;
}