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

        ans += str[i]; // 채우고?

        if (str[i] == bomb.back() && ans.size() >= bomb.size()) {

            check = ""; // check 초기화
            n = bomb.length() - 1;

            for (int j = ans.length() - 1; j >= 0; --j) { // 뒤에서 부터 검사

                if (ans[j] == bomb[n]) { // 같다면

                    check.insert(0, (char*)ans[j]); // check에 앞으로 넣어줘서 선입후출 느낌으로,,
                    //cout << ans[j] << " " << bomb[n] << " : " << check << endl;
                    //cout << j << " " << n << endl;
                    n--;
                }
                else { // 틀림ㅇㅇ

                    n = bomb.length() - 1; // 초기화
                    break;
                }

                if (check == bomb) { // bomb랑 같은 상황이 온다?

                    cout << "더ㅣㄴ다!!!!";
                    ans.erase(ans.at(j), ans.length() - 1); // 지우고 나간다.
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