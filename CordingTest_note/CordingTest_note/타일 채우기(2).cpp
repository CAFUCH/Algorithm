//#include <iostream>
//using namespace std;
//
//int dp[10001] = { 1, 1, 3 };
//
//int fun(int v)
//{
//	if (v <= 2)
//		return dp[v];
//	else if (dp[v] == 0)
//		dp[v] = (fun(v - 1) % 10007 + (2 * fun(v - 2))) % 10007;
//	return dp[v];
//}
//
//int main()
//{
//	int n;
//
//	cin >> n;
//
//	cout << fun(n)% 10007;
//}