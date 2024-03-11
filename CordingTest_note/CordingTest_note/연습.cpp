////#include <iostream>
////#include <vector>
////using namespace std;
////
////int main() {
////
////    ios_base::sync_with_stdio(false);
////    cin.tie(NULL);
////    cout.tie(NULL);
////
////    int x, m;
////    string order = "";
////    cin >> m;
////    int bit = 0;
////    for (int i = 0; i < m; i++) {
////        cin >> order;
////        if (order == "add") { // x 추가
////            cin >> x;
////            bit |= (1 << x);
////        }
////        else if (order == "remove") { // x 제거
////            cin >> x;
////            bit &= ~(1 << x);
////        }
////        else if (order == "check") { // x가 있는지 확인
////            cin >> x;
////            if (bit & (1 << x)) cout << 1 << "\n";
////            else cout << 0 << "\n";
////        }
////        else if (order == "toggle") { //x가 있으면 없애고, 없으면 추가.
////            cin >> x;
////            bit = bit ^ (1 << x);
////        }
////        else if (order == "all")  // 전부 1로 셋팅
////            bit = (1 << 21) - 1;
////        else if (order == "empty") // 전부 0으로 셋팅
////            bit = 0;
////
////    }
////    return 0;
////}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//    int n, s, b;
//    vector<pair<int, int>> v;
//    cin >> n;
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> s >> b;
//        v.push_back({ s,b });
//    }
//    int ans = 1000000000;
//    //n개의 원소로 만들 수 있는 부분 집합의 수(공집합제외) : 2의n승-1
//    for (int i = 1; i < (1 << n); i++)
//    {
//        int s_sum = 1, b_sum = 0;
//        // 선택된 재료 확인 
//        for (int x = 0; x < n; x++)
//        {
//            if (i & (1 << x)) // i번 재료가 선택되었다면 
//            {
//                s_sum *= v[x].first;
//                b_sum += v[x].second;
//            }
//        }
//        ans = min(ans, abs(s_sum - b_sum));
//    }
//    cout << ans;
//}
//
//int n, d, k;
//int res = INT_MIN;
//
//void DFS(int level, int s, int bit, vector<int>& st, vector<int>& pow) {
//    if (level == k) {
//        int cnt = 0;
//        // 현재 음식을 먹을 수 있는 학생 수 세기 
//        for (int i = 1; i <= n; i++)
//            if ((bit //무슨 연산자 쓸깡  st[i]) == st[i]) 
//                cnt++;
//        res = max(res, cnt);
//    }
//    else {
//        for (int i = s; i <= d; i++) {
//            DFS(level + 1, i + 1, bit + pow[i], st, pow);
//        }
//    }
//}
//int main() {
//    cin >> n >> d >> k;
//    vector<int> st(n + 1), pow(d + 1);
//    pow[1] = 1;
//    for (int i = 2; i <= d; i++) pow[i] = pow[i - 1] * 2;
//    for (int i = 1; i <= n; i++) {
//        int m, num;
//        cin >> m;
//        for (int j = 1; j <= m; j++) {
//            cin >> num;
//            st[i] += pow[num];
//        }
//    }
//    DFS(0, 1, 0, st, pow);
//    cout << res;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, a, b;
//	int min, max;
//
//	cin >> n;
//	cin >> a >> b;
//	min = max = 0;
//
//	for (int i = a; i <= b; ++i)
//	{
//		int left = 1;
//		int right = n;
//		int cnt = 0;
//
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			cnt++;
//
//			if (mid == i)
//				break;
//			else if (mid > i)
//				right = mid - 1;
//			else if (mid < i)
//				left = mid + 1;
//		}
//
//		if (min >= cnt || min == 0)
//			min = cnt;
//		if (max <= cnt || max == 0)
//			max = cnt;
//	}
//
//	cout << min << " " << max;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	string n, m;
//	vector<vector<int>> dp;
//
//	cin >> n >> m;
//	dp.resize(n.size() + 1, vector<int>(m.size() + 1));
//
//	for (int i = 1; i <= n.size(); ++i)
//	{
//		for (int j = 1; j <= m.size(); ++j)
//		{
//			if (n[i - 1] == m[j - 1])
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			else
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//		}
//	}
//
//	cout << dp[n.size()][m.size()];
//}



//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	string n, m;
//	vector<vector<int>> dp;
//	stack<char> ans;
//
//	cin >> n >> m;
//	dp.resize(n.size() + 1, vector<int>(m.size() + 1));
//
//	for (int i = 1; i <= n.size(); ++i)
//	{
//		for (int j = 1; j <= m.size(); ++j)
//		{
//			if (n[i - 1] == m[j - 1])
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			else
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//		}
//	}
//
//	int i = n.size(); int j = m.size();
//
//	while (dp[i][j] != 0)
//	{
//		if (dp[i][j] == dp[i][j - 1])
//			j -= 1;
//		else if (dp[i][j] == dp[i - 1][j])
//			i -= 1;
//		else
//		{
//			i -= 1;
//			j -= 1;
//			ans.push(n[i]);
//		}
//	}
//
//	cout << dp[n.size()][m.size()] << endl;
//
//	while (!ans.empty())
//	{
//		cout << ans.top();
//		ans.pop();
//	}




#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <unordered_map>
using namespace std;

//// 1 - 통
//int main()
//{
//	string str1, str2;
//	getline(cin, str1);
//	getline(cin, str2);
//
//	while (str1.find(" ") != string::npos)
//		str1.erase(str1.find(" "), 1);
//	while (str2.find(" ") != string::npos)
//		str2.erase(str2.find(" "), 1);
//	cout << str1 << str2;
//}

////2 - 통
//int main()
//{
//	int n, m, k = 0;
//	vector<vector<int>> v;
//
//	cin >> n >> m;
//	v.resize(n, vector<int>(m));
//
//	for (int i = 0; i < m; ++i)
//	{
//		if (i % 2 == 0)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				v[j][i] = k;
//				k++;
//			}
//		}
//		else
//		{
//			for (int j = n - 1; j >= 0; --j)
//			{
//				v[j][i] = k;
//				k++;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//			cout << v[i][j] << " ";
//		cout << endl;
//	}
//}

//// 3 - 통
//void func(int& a, int& b)
//{
//	if (a < b)
//	{
//		a += 10;
//		b *= 2;
//	}
//	else
//	{
//		a *= 2;
//		b += 10;
//	}
//	return;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	func(a, b);
//	cout << a << " " << b;
//}

//// 4 - 통
//int t;
//void func(int n)
//{
//	if (n == 0)
//		return;
//
//	for (int i = n; i < t; ++i)
//		cout << " ";
//	for (int i = 0; i < n; ++i)
//		cout << "*" << " ";
//	cout << endl;
//
//	func(n - 1);
//
//	for (int i = n; i < t; ++i)
//		cout << " ";
//	for (int i = 0; i < n; ++i)
//		cout << "*" << " ";
//	cout << endl;
//}
//int main()
//{
//	cin >> t;
//	func(t);
//}

////6 - 통
//int main()
//{
//	int n, m, k;
//	vector<int> v;
//
//	cin >> n >> m;
//	v.resize(m);
//
//	for (int i = 0; i < n; ++i)
//		cin >> v[i];
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> k;
//		
//		int left = 0;
//		int right = n - 1;
//		int mid;
//
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//			if (k == v[mid])
//			{
//				cout << mid + 1 << endl;
//				break;
//			}
//			else if (k > v[mid])
//				left = mid + 1;
//			else if (k < v[mid])
//				right = mid - 1;
//		}
//
//		if (k != v[mid])
//			cout << "-1" << endl;
//	}
//}

//// 7 - 통
//bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
//{
//	if (a.first.first == b.first.first)
//		a.first.second > b.first.second ? true : false;
//	return a.first.first < b.first.first ? true : false;
//}
//int main()
//{
//	int t, height, weight;
//	vector<pair<pair<int, int>, int>> student;
//
//	cin >> t;
//	student.resize(t);
//
//	for (int i = 0; i < t; ++i)
//	{
//		cin >> height >> weight;
//		student[i] = { { height, weight }, i + 1 };
//	}
//
//	sort(student.begin(), student.end(), cmp);
//
//	for (int i = 0; i < t; ++i)
//	{
//		cout << student[i].first.first << " " << student[i].first.second << " " << student[i].second;
//		cout << endl;
//	}
//}

//// 8
//int main()
//{
//	int t, n;
//	unordered_map<int, int> map;
//
//	cin >> t;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> n;
//		map[n] = i + 1;
//	}
//}

////9 - 시가ㅏㄴ 초과인듯
//int n, m, cnt, k = 1;
//vector<vector<pair<int, bool>>> arr;
//vector<pair<int, int>> value;
//int dx[] = { 0, 0, -1, 1 };
//int dy[] = { -1, 1, 0, 0 };
//
//bool cmp(pair<int, int> a, pair<int, int> b)
//{
//	if (a.second == b.second)
//		return a.first < b.first ? true : false;
//	return a.second > b.second ? true : false;
//}
//void DFS(int x, int y)
//{
//	for (int i = 0; i < 4; ++i)
//	{
//		int nx, ny;
//		nx = x + dx[i];
//		ny = y + dy[i];
//
//		if (nx < 0 || ny < 0 || nx >= m || ny >= n)
//			continue;
//		if (arr[ny][nx].first <= k && arr[ny][nx].second == false)
//		{
//			arr[ny][nx].second = true;
//			DFS(nx, ny);
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	arr.resize(n, vector<pair<int, bool>>(m));
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//			cin >> arr[i][j].first;
//	}
//	
//	while (true)
//	{
//		cnt = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < m; ++j)
//			{
//				if (arr[i][j].first <= k && arr[i][j].second == false)
//				{
//					cnt++;
//					arr[i][j].second = true;
//					DFS(j, i);
//					value.push_back({ k, cnt });
//				}
//			}
//			
//		}
//		if (cnt == 0)
//			break;
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < m; ++j)
//				arr[i][j].second = false;
//		}
//		k++;
//	}
//
//	sort(value.begin(), value.end(), cmp);
//
//	cout << value[0].first << " " << value[0].second;
//}
//90 ~100점은 A, 80 ~89점은 B, 70 ~79점은 C, 60 ~69점은 D, 나머지 점수는 F
//int main()
//{
//	int t, n;
//	int arr[101];
//	cin >> t >> n;
//	for (int i = 0; i < t; ++i)
//	{
//		cin >> arr[i];
//		if (arr[i] < n)
//			cout << arr[i] << " ";
//	}
//}4

//int main()
//{
//	float n, m, sum = 0;
//	cin >> n;	
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> m;
//		sum += m;
//	}
//	cout << sum / n;
//}

//int main()
//{
//    string str;
//    while (cin >> str)
//    {
//        cout << str << '\n';
//    }
//}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    unsigned long long n, m;
//    cin >> n >> m;
//    cout << n + m;
//}
//#include <queue>

//#include <stack>
//int main()
//{
//	cin.tie(NULL);
//	std::ios_base::sync_with_stdio(false);
//
//	int t, n;
//	string str;
//	stack<int> stc;
//	cin >> t;
//	for (int i = 0; i < t; ++i)
//	{
//		cin >> str;
//		if (str == "push")
//		{
//			cin >> n;
//			stc.push(n);
//		}
//		else if (str == "top")
//		{
//			if (!stc.empty())
//				cout << stc.top() << '\n';
//			else
//				cout << "-1" << '\n';
//				
//		}
//		//else if (str == "back")
//		//{
//		//	if (!stc.empty())
//		//		cout << stc.back() << '\n';
//		//	else
//		//		cout << "-1" << '\n';
//		//}
//		else if (str == "size")
//			cout << stc.size() << '\n';
//		else if (str == "empty")
//			cout << stc.empty() << '\n';
//		else if (str == "pop")
//		{
//			if (stc.empty())
//				cout << "-1" << '\n';
//			else
//			{
//				cout << stc.top() << '\n';
//				stc.pop();
//			}
//		}
//	}
//}

#include <stack>
//
//int main()
//{
//	int t, n, m;
//	stack<int> stc;
//	cin >> t;
//	for (int i = 0; i < t; ++i)
//	{
//		cin >> n;
//
//		if (n == 1)
//		{
//			cin >> m;
//			stc.push(m);
//		}
//		else if (n == 2)
//		{
//			if (!stc.empty())
//			{
//				if (!stc.empty())
//				{
//					cout << stc.top() << '\n';
//					stc.pop();
//				}
//				else
//					cout << "-1" << '\n';
//			}
//			else
//				cout << "-1" << '\n';
//		}
//		else if (n == 3)
//			cout << stc.size() << '\n';
//		else if (n == 4)
//			cout << stc.empty() << '\n';
//		else if (n == 5)
//		{
//			if (!stc.empty())
//				cout << stc.top() << '\n';
//			else
//				cout << "-1" << '\n';
//		}
//	}
//}

//int main()
//{
//	int t, n, sum = 0;
//	stack<int> stc;
//	cin >> t;
//	for (int i = 0; i < t; ++i)
//	{
//		cin >> n;
//
//		if (n != 0)
//			stc.push(n);
//		else
//		{
//			if (!stc.empty())
//				stc.pop();
//		}
//	}
//	while (!stc.empty())
//	{
//		sum += stc.top();
//		stc.pop();
//	}
//	cout << sum;
//}

//#include <stack>
//
//int main()
//{
//	int t;
//	string str;
//	cin >> t;
//	for (int i = 0; i < t; ++i)
//	{
//	    stack<char> stc;
//		bool correct = true;
//		cin >> str;
//        for (int j = 0; j < str.size(); ++j) {
//
//            if (str[j] == '(')
//            {
//                stc.push(str[j]);
//            }
//            else {
//
//                if (!stc.empty())
//                    stc.pop();
//                else
//                {
//                    correct = false;
//                    break;
//                }
//            }
//        }
//        if (stc.empty() && correct)
//            cout << "YES" << '\n';
//        else
//            cout << "NO" << '\n';
//	}
//}

//#include <string>
//int main()
//{
//	int n, m, k;
//	int arr[10] = { };
//	string sum;
//	cin >> n >> m >> k;
//	sum = to_string(n * m * k);
//
//	for (int i = 0; i < sum.length(); ++i)
//	{
//		switch (sum[i])
//		{
//		case '0':
//			arr[0]++;
//			break;
//		case '1':
//			arr[1]++;
//			break;
//		case '2':
//			arr[2]++;
//			break;
//		case '3':
//			arr[3]++;
//			break;
//		case '4':
//			arr[4]++;
//			break;
//		case '5':
//			arr[5]++;
//			break;
//		case '6':
//			arr[6]++;
//			break;
//		case '7':
//			arr[7]++;
//			break;
//		case '8':
//			arr[8]++;
//			break;
//		case '9':
//			arr[9]++;
//			break;
//		}
//	}
//	for (int temp : arr)
//		cout << temp << '\n';
//}

//long long sum(std::vector<int>& a)
//{
//	long long sum = 0;
//	for (int temp : a)
//		sum += temp;
//	return sum;
//}

//int main()
//{
//    int t;
//    string str;
//    cin >> t;
//    cin >> str;
//    cout << (int)str[0] + (int)str[2] << '\n';
//}

//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		n += 1;
//		cout << m / n << '\n';
//	}
//}
//
//int main()
//{
//	cout << "  ___  ___  ___" << '\n';
//	cout << "  | |__| |__| |" << '\n';
//	cout << "  |           |" << '\n';
//	cout << "   \\_________/" << '\n';
//	cout << "    \\_______/" << '\n';
//	cout << "     |     |" << '\n';
//	cout << "     |     |" << '\n';
//	cout << "     |     |" << '\n';
//	cout << "     |     |" << '\n';
//	cout << "     |_____|" << '\n';
//	cout << "  __/       \\__" << '\n';
//	cout << " /             \\" << '\n';
//	cout << "/_______________\\" << '\n';
//}

//int main()
//{
//	cout << "(___)" << '\n';
//	cout << "(o o)____/" << '\n';
//	cout << " @@      \\" << '\n';
//	cout << "  \\ ____,/" << '\n';
//	cout << "  //   //" << '\n';
//	cout << " ^^   ^^" << '\n';
//}

//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a + b << '\n';
//	cout << a - b << '\n';
//	cout << a * b << '\n';
//}

////#include <iostream>
////using namespace std;
////
////long long arr [1000002], sorted[1000002];
////
////void merge(long long left, long long right) {
////
////	long long mid, p1, p2, sortDx;
////
////	if (left < right) {
////
////		mid = (left + right) / 2;
////		merge(left, mid);
////		merge(mid + 1, right);
////
////		p1 = left;
////		p2 = mid + 1;
////		sortDx = left;
////
////		while (p1 <= mid && p2 <= right) {
////
////			if (arr[p1] > arr[p2]) sorted[sortDx++] = arr[p2++];
////			else sorted[sortDx++] = arr[p1++];
////		}
////
////		while (p1 <= mid)
////			sorted[sortDx++] = arr[p1++];
////
////		while (p2 <= right)
////			sorted[sortDx] = arr[p2++];
////
////		for (long long i = left; i <= right; ++i)
////			arr[i] = sorted[i];
////	}
////}
////
////int main() {
////
////	ios_base::sync_with_stdio(false);
////	cin.tie(nullptr);
////
////	long long n;
////
////	cin >> n;
////
////	for (long long i = 1; i <= n; ++i)
////		cin >> arr[i];
////
////	merge(1, n);
////
////	for (long long i = 1; i <= n; ++i)
////		cout << arr[i] << '\n';
////}

//int main()
//{
//	long long n, current, sum;
//	current = sum = 0;
//	long long arr[1001], arr2[1001];
//	cin >> n;
//	for (long long i = 0; i < n; ++i)
//		cin >> arr[i];
//	for (long long i = 0; i < n; ++i)
//	{
//		cin >> arr2[i];
//		if (current < arr[i] || current < arr2[i])
//		{
//			current = max(arr[i], arr2[i]);
//			cout << current << endl;
//			sum++;
//		}
//	}
//	cout << sum;
//}

//#include	<string>
//int main()
//{
//	string str;
//	getline(cin, str);
//	if (str.at(0) != '"' || str.at(str.length() - 1) != '"')
//		cout << "CE";
//	else
//	{
//		for (int i = 1; i < str.length() - 1; ++i)
//			cout << str[i];
//	}
//} 

//#include <queue>
//int main()
//{
//	int n, m;
//	queue<int> q;
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)
//		q.push(i);
//	cout << "<";
//	while (!q.empty())
//	{
//		for (int i = 0; i < m - 1; ++i)
//		{
//			int temp = q.front();
//			q.pop();
//			q.push(temp);
//		}
//		if (q.size() == 1)
//			cout << q.front();
//		else
//			cout << q.front() << ", ";
//		q.pop();
//	}
//	cout << ">";
//}

//int main()
//{
//	int t, h, w, n;
//	int a, b;
//	cin >> t;
//	for (int i = 0; i < t; ++i)
//	{
//		cin >> h >> w >> n;
//
//		if (n % h == 0)
//			cout << n / h;
//		else
//			cout << n % h;
//		//if (n / h != 1)
//		//{
//		//	if ((n / h) + 1 < 10)
//		//		cout << "&0";
//		//}
//		if ((n / h) + 1 < 10)
//			cout << "*0";
//		cout << (n / h) + 1 << '\n';
//	}
//}

//int main()
//{
//	int arr[8];
//	string str;
//
//	for (int i = 0; i < 8; ++i)
//		cin >> arr[i];
//
//	for (int i = 0; i < 8; ++i)
//	{
//		if (arr[i] == i + 1 && str != "descending")
//			str = "ascending";
//		else if (arr[i] == 8 - i && str != "ascending")
//			str = "descending";
//		else
//		{
//			str = "mixed";
//			break;
//		}
//	}
//
//	cout << str;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    cout << "SHIP NAME      CLASS          DEPLOYMENT IN SERVICE" << '\n';
//    cout << "N2 Bomber      Heavy Fighter  Limited    21        " << '\n';
//    cout << "J-Type 327     Light Combat   Unlimited  1         " << '\n';
//    cout << "NX Cruiser     Medium Fighter Limited    18        " << '\n';
//    cout << "N1 Starfighter Medium Fighter Unlimited  25        " << '\n';
//    cout << "Royal Cruiser  Light Combat   Limited    4         ";
//}