//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	int dp[31][31] = { 0 };
//
//	dp[0][0] = 1;
//	dp[1][0] = 1;
//	dp[1][1] = 1;
//	
//	cin >> n >> k;
//
//	for (int i = 2; i < n; ++i)
//	{
//		dp[i][0] = 1;
//		for (int j = 1; j < n; ++j)
//		{
//			dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
//		}
//		dp[i][n] =1;
//	}
//
//	cout << dp[n - 1][k - 1];
//}