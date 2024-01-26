//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int t, n;
//	long long dp[101] = { 1, 1, 1, 1 };
//
//	cin >> t;
//
//	while (t--)
//	{
//		cin >> n;
//
//		for (int i = 4; i <= n; ++i)
//		{
//			dp[i] = dp[i - 2] + dp[i - 3];
//		}
//
//		cout << dp[n] << "\n";
//	}
//}