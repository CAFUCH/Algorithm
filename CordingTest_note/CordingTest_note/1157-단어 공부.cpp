//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <vector>
//using namespace std;
//
//bool cmp(const pair<char, int> a, const pair<char, int> b)
//{
//	return a.second > b.second;
//}
//
//int main()
//{
//	int max = 0;
//	string str;
//	map<char, int> m	;
//	cin >> str;
//	for (int i = 0; i < str.length(); ++i)
//	{
//		if (str.at(i) > 96)
//			m[str.at(i) - 32] += 1;
//		else
//			m[str.at(i)] += 1;
//	}
//	vector<pair<char, int>> vec(m.begin(), m.end());
//	sort(vec.begin(), vec.end(), cmp);
//	if (vec[0].second == vec[1].second)
//		cout << "?";
//	else
//		cout << vec[0].first;
//
//	/*for (int i = 0; i < vec.size(); ++i)
//	{
//		if (vec[i].second == max)
//		{
//			cout << "?";
//			return 0 ;
//		}
//		else
//		{
//			max = vec[i].second;
//			cout << max;
//		}
//	}*/
//}