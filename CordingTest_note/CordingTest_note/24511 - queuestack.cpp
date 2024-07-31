//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n;
//
//	bool* is_stack = new bool[n];
//	int* num = new int[n];
//
//	for (int i = 0; i < n; ++i)
//		cin >> is_stack[i];
//	for (int i = 0; i < n; ++i)
//		cin >> num[i];
//
//	cin >> m;
//	for (int i = 0; i < m; ++i)
//	{
//		int k;
//		cin >> k;
//
//		if (is_stack[n - 1] == false)
//			cout << num[n - 1] << " ";
//		else
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				if (is_stack[j])
//				{
//					num[j] = k;
//				}
//				else
//				{
//
//					int temp = k;
//					k = num[j];
//					num[j] = temp;
//				}
//			}
//			cout << k << " ";
//		}
//	}
//}