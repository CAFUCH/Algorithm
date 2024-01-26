// 7의 개수
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, sum = 0;
//	string str;
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> str;
//
//		for (int j = 0; j < str.size(); ++j)
//		{
//			if (str[j] == '7')
//				sum++;
//		}
//	}
//
//	cout << sum;
//}



// 문자열 내 p와 y의 개수
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int p = 0;
//	int y = p;
//	string str;
//
//	cin >> str;
//
//	for (int i = 0; i < str.size(); ++i)
//	{
//		if (str[i] == 'p')
//			p++;
//		else if (str[i] == 'y')
//			y++;
//	}
//
//	if (p == y || p == 0 || y == 0)
//		cout << "true";
//	else
//		cout << "false";
//}



// 가까운 수
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m, k, num, near = 0;
//
//	cin >> n >> k;
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> m;
//
//		if (near > abs(k - m) || near == 0)
//		{
//			near = abs(k - m);
//			num = m;
//		}
//	}
//
//	cout << num;
//}



// 각 행의 평균과 가장 가까운 값
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int t = 9;
//	int n, num, near;
//	int v[9][9] = { 0 };
//	float ave[9] = { 0 };
//	
//	for (int i = 0; i < t; ++i)
//	{
//		for (int j = 0; j < t; ++j)
//		{
//			cin >> n;
//			v[i][j] = n;
//			ave[i] += n;
//		}
//
//		ave[i] /= t;
//		ave[i] = floor(ave[i] + 0.5f);
//	}
//
//	for (int i = 0; i < t; ++i)
//	{
//		near = 0;
//
//		for (int j = 0; j < t; ++j)
//		{
//			if (near == abs(v[i][j] - ave[i]) && near != 0)
//			{
//				num = num > ave[i] ? num : ave[i];
//			}
//			else if (near > abs(v[i][j] - ave[i]) || near == 0)
//			{
//				num = v[i][j];
//				near = abs(v[i][j] - ave[i]);
//			}
//		}
//
//		cout << ave[i] << " " << num << '\n';
//	}
//}


//A로 B 만들기
// // 푸는중
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string before, after;
//
//	cin >> after >> before;
//
//	for (int i = 0; i < before.size(); ++i)
//	{
//		after.erase();
//	}
//		
//}