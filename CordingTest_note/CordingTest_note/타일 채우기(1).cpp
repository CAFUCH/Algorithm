//#include <iostream>
//using namespace std;
//
//int dp[101] = { 1, 1, 2 };
//
//int fun(int v)
//{
//	if (v <= 2)
//		return dp[v];
//	else if (dp[v] == 0)
//		dp[v] = fun(v - 1) + fun(v - 2);
//	return dp[v];
//}
//
//int main()
//{
//	int n;
//
//	cin >> n;
//
//	cout << fun(n);
//}