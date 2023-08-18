//#include<iostream>
//#include<queue>
//#include<string>
//using namespace std;
//
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//    queue<int> q;
//
//    int n;
//    string str;
//
//    cin >> n;
//    cin.ignore();
//
//    while (n--)
//    {
//        getline(cin, str);
//        cin.ignore();
//
//        if (str.substr(0, 4) == "push")
//        {
//            q.push(stoi(str.substr(5)));
//            cout << endl;
//        }
//        else if (str == "front")
//        {
//            if (q.empty())
//                cout << -1 << endl;
//            else 
//                cout << str.front() << endl;
//        }
//        else if (str == "back")
//        {
//            if (q.empty()) cout << -1 << endl;
//            else 
//                cout << q.back() << endl;
//        }
//        else if (str == "size")
//        {
//            cout << q.size() << endl;
//        }
//        else if (str == "empty")
//        {
//            if (q.empty()) cout << 1 << endl;
//            else
//                cout << 0 << endl;
//        }
//        else if (str == "pop")
//        {
//            if (q.empty()) cout << -1 << endl;
//            else
//            {
//                cout << q.front() << endl;
//                q.pop();
//            }
//        }
//    }
//}