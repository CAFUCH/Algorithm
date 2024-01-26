////#include <iostream>
////#include <stack>
////using namespace std;
//
////int main() {
////	// https://www.acmicpc.net/problem/11047
////
////	int n, k, a;
////	vector<int> arr;
////	int anw = 0;
////
////	cin >> n >> k;
////
////	for (int i = 0; i < n; ++i) {
////
////		cin >> a;
////		arr.push_back(a);
////	}
////
////	for (int i = arr.size() - 1; i >= 0; --i) {
////
////		if (arr[i] > k)
////			continue;
////
////		while (true) {
////
////			k -= arr[i];
////			anw++;		
////			if (arr[i] > k)
////				break;
////		}
////
////		if (k == 0)
////			break;
////	}
////
////	cout << anw;
////}
//
//
////int main()
////{
////	int n, cnt = 0;
////	long long m, k;
////	stack<int> s;
////
////	cin >> n >> m;
////
////	for (int i = 0; i < n; ++i)
////	{
////		cin >> k;
////		
////		if (m >= k)
////			s.push(k);
////	}
////
////	while (!s.empty())
////	{
////		if (m <= 0)
////			break;
////
////		if (m >= s.top())
////		{
////			m -= s.top();
////			cnt++;
////		}
////		else
////			s.pop();
////	}
////
////	cout << cnt;
////}
//
////#include <iostream>
////
////using namespace  std;
////
////int main() {
////	int arr[10];
////	int n, k, count = 0;
////
////	cin >> n >> k;
////
////	for (int i = 0; i < n; i++)
////	{
////		cin >> arr[i];
////	}
////
////	for (int i = 0; i < 10; i++)
////	{
////		while (k >= arr[i])
////		{
////			k -= arr[i];
////			count++;
////		}
////	}
////
////	cout << count;
////}	
//
//
//
//
//
//
//
//
////#include <iostream>
////#include <stack>
////using namespace std;
////
////int main()
////{
////	int n, m, t, cnt = 0;
////	stack<int> stc;
////
////	cin >> n >> m;
////	
////
////	for (int i = 0; i < n; ++i)
////	{
////		cin >> t;
////		stc.push(t);
////	}
////
////	while (!stc.empty())
////	{
////		if (m < stc.top())
////		{
////			stc.pop();
////			continue;
////		}
////		m -= stc.top();
////		cnt++;
////	}
////
////	cout << cnt;
////}
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	int n, k, count = 0;
//
//	int arr[10];
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = n - 1; i >= 0; i--)
//	{
//		while (k >= arr[i])
//		{
//			k -= arr[i];
//			count++;
//		}
//	}
//
//	cout << count;
//}