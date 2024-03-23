////#include <iostream>
////using namespace std;
////
//////#pragma region "selection" // ¼±ÅÃ
////int main() {
////
////	int a[101], n, tmp, idx, i, j;
////
////	cin >> n;
////
////	for (i = 0; i < n; i++)
////		cin >> a[i];
////
////	for (i = 0; i < n - 1; i++) {
////
////		idx = i;
////
////		for (j = i + 1; j < n; j++)
////			if (a[idx] > a[j]) idx = j;
////
////		tmp = a[i];
////		a[i] = a[idx];
////		a[idx] = tmp;
////	}
////
////	for (i = 0; i < n; i++)
////		cout << a[i] << " ";
////
////	return 0;
////}
//////#pragma endregion
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n, index;
//    int arr[100];
//
//    cin >> n;
//    for (int i = 0; i < n; ++i)
//        cin >> arr[i];
//
//    for (int i = 0; i < n - 1; ++i)
//    {
//        index = i;
//        for (int j = i + 1; j < n; ++j)
//        {
//            if (arr[i] < arr[j])
//                index = j;
//        }
//        int temp = arr[i];
//        arr[i] = arr[index];
//        arr[index] = temp;
//    }
//
//    for (int i = 0; i < n; ++i)
//        cout << arr[i] << endl;
//}