//#include<iostream>
//#include<set>
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n, sum = 0;
//	string s;
//
//	set<string> set;
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//
//		cin >> s;
//
//		if (s == "ENTER")
//			set.clear();
//
//		else
//		{
//			if (set.find(s) == set.end())
//			{
//				set.insert(s);
//				sum++;
//			}
//		}
//	}
//
//	cout << sum;
//}