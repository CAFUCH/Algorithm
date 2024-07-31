//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m, sum = 0;
//	char arr[51][51];
//	cin >> n >> m;
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//			cin >> arr[i][j];
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			if (arr[i][j] == 'W' && (i + j) % 2 != 0)
//				sum++;
//			else if (arr[i][j] == 'B' && ((i + j) % 2 == 0 || i + j == 0))
//				sum++;
//		}
//	}
//
//	cout << sum;
//}