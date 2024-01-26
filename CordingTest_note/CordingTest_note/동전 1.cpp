//#include <iostream>
//#include <vector>
//using namespace std;
//
//long long* arr;
//vector<vector<long long>> dp;
//
//int main()
//{
//	long long n, m, t;
//
//	cin >> n >> m;
//
//	arr = new long long[n];
//	dp.resize(n, vector<long long>(m + 1));
//
//	for (long long i = 0; i < n; ++i)
//	{
//		cin >> t;
//		arr[i] = t;
//	}
//	
//	for (long long i = 0; i < n; ++i)
//	{
//		for (long long j = 0; j <= m; ++j)
//		{
//			if (i == 0)
//			{
//				dp[i][j] = 1;
//				continue;
//			}
//
//			if (0 <= j - arr[i])
//				dp[i][j] = dp[i - 1][j] + dp[i][j - arr[i]];
//			else
//				dp[i][j] = dp[i - 1][j];
//		}
//	}
//
//	cout << dp[n - 1][m];
//}