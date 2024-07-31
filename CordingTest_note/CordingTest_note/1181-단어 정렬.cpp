//#include <iostream>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//struct Compare
//{
//	bool operator() (const string& a, const string& b) const 
//	{
//		if (a.length() == b.length())
//			return a < b;
//		else
//			return a.length() < b.length();
//	}
//};
//
//int main()
//{
//	int t;
//	string str;
//	set<string, Compare> vec;
//
//	cin >> t;
//
//	for (int i = 0; i < t; ++i)
//	{
//		cin >> str;
//		vec.insert(str);
//	}
//
//	for (auto s : vec)
//	{
//		if (s != "")
//			cout << s << '\n';
//	}
//}