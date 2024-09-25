////#include <iostream>
////using namespace std;
////
//////#pragma region "selection" // 선택
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

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> arr = { 3, 6, 1, 7, 9, 2, 5, 4, 8 };

	//// 선택
	//int min = 0;
	//for (int i = 0; i < arr.size() - 1; ++i)
	//{
	//	min = i;
	//	for (int j = i + 1; j < arr.size(); ++j)
	//	{
	//		if (arr[j] < arr[min])
	//			min = j;
	//	}
	//	swap(arr[i], arr[min]);
	//}

	//// 선택
	//for (int i = 1; i < arr.size(); ++i)
	//{
	//	int temp = arr[i];
	//	int j = i - 1;
	//	while (j >= 0 && temp < arr[j])
	//	{
	//		arr[j + 1] = arr[j];
	//		--j;
	//	}
	//	arr[j + 1] = temp;
	//}
	//
	//// 버블
	//for (int i = 0; i < arr.size() - 1; ++i)
	//{
	//	for (int j = 0; j < arr.size() - i - 1; ++j)
	//	{
	//		if (arr[j + 1] < arr[j])
	//			swap(arr[j], arr[j + 1]);
	//	}
	//}
}