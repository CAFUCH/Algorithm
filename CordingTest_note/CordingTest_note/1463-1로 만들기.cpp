////#include <iostream>
////using namespace std;
////
////int dp[1000001] = { 0 };
////
////int main()
//////https://www.acmicpc.net/problem/1463
////{
////	int n;
////
////	cin >> n;
////
////	for (int i = 2; i <= n; ++i)
////	{
////		dp[i] = 1 + dp[i - 1];
////		if (i % 3 == 0)
////			dp[i] = min(1 + dp[i / 3], dp[i]);
////		if (i % 2 == 0)
////			dp[i] = min(1 + dp[i / 2], dp[i]);
////	}
////
////	cout << dp[n];
////}
//
////#include <iostream>
////using namespace std;
////
////int main()
////{
////    int n, key;
////    int arr[100];
////
////    cin >> n;
////    for (int i = 0; i < n; ++i)
////        cin >> arr[i];
////
////    for (int i = 1; i < n; ++i)
////    {
////        int j = 0;
////        key = arr[i];
////        for (j = i - 1; j >= 0; --j)
////        {
////            if (arr[j] > key)
////                arr[j + 1] = arr[j];
////            else
////                break;
////        }
////        arr[j + 1] = key;
////    }
////
////    for (int i = 0; i < n; ++i)
////        cout << arr[i] << endl;
////}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n, min, index;
//    int arr[100];
//
//    cin >> n;
//    for (int i = 0; i < n; ++i)
//        cin >> arr[i];
//
//    for (int i = 0; i < n; ++i)
//    {
//        min = arr[i];
//        index = i;
//        for (int j = i + 1; j < n; ++j)
//        {
//            if (arr[j] < min)
//            {
//                min = arr[j];
//                index = j;
//            }
//        }
//        int temp = arr[i];
//        arr[i] = arr[index];
//        arr[index] = temp;
//    }
//
//    for (int i = 0; i < n; ++i)
//        cout << arr[i] << endl;
//}