//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int t, n, m, cnt = 1;
//	vector<pair<int, int>> v;
//
//	cin >> t;
//
//	for (int i = 0; i < t; ++i)
//	{
//		cin >> n >> m;
//		v.push_back({ m, n });
//	}
//
//	sort(v.begin(), v.end());
//
//	t = v[0].first;
//
//	for (int i = 1; i < v.size();++i)
//	{
//		if (t <= v[i].second)
//		{
//			cnt++;
//			t = v[i].first;
//		}
//	}
//
//	cout << cnt;
//}