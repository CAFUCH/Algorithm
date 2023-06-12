//#include <iostream>
//#include <queue>
//using namespace std;
//
//#pragma region "radix" // 기수
//#define BUCKETS 10 //버킷 0 ~ 9
//#define DIGITS 3 // 가장 높은 자릿수
//
//queue<int>q[10];
//int num[100];
//
//void radix_sort(int size) {
//
//	int i = 0, factor = 1;
//
//	for (int d = 0; d < DIGITS; d++) 
//	{
//		for (int j = 0; j < size; j++)
//			q[(num[j] / factor) % 10].push(num[j]);		
//
//		for (int k = 0; k < BUCKETS; k++) // 9번 반복
//		{
//			while (q[k].size()) // 한 버킷에 들어있는 개수만ㄴ큼 반복
//			{
//				num[i++] = q[k].front();
//				q[k].pop();
//			}
//		}
//		i = 0;
//		factor *= 10;
//	}
//}
//
//int main() {
//
//	int size;
//
//	cin >> size;
//
//	for (int i = 0; i < size; i++) {
//
//		cin >> num[i];
//	}
//
//	radix_sort(size);
//
//	for (int i = 0; i < size; i++) {
//
//		cout << num[i] << " ";
//	}
//}
//#pragma endregion