//#include <iostream>
//using namespace std;
//
//int dp[100] = { 0, 1, 1 };
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
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n;
//
//	cin >> n;
//
//	cout << fun(n);
//}