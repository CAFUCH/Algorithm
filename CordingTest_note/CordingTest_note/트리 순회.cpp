//#include <iostream>
//#include <map>
//using namespace std;
//
//void preorder(char s);
//void inorder(char s);
//void postorder(char s);
//
//map<char, pair<char, char>> node;
//
//int main() {
//	// https://www.acmicpc.net/problem/1991
//
//	int n;
//	char lname, name, rname;
//	
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//
//		cin >> name >> lname >> rname;
//		node[name] = { lname, rname };
//	}
//
//	preorder('A'); cout << '\n';
//	inorder('A'); cout << '\n';
//	postorder('A'); cout << '\n';
//}
//
//void preorder(char s)
//{
//	if (node.find(s) == node.end())
//		return;
//
//	cout << s;
//	preorder(node[s].first);
//	preorder(node[s].second);
//}
//
//void inorder(char s)
//{
//	if (node.find(s) == node.end())
//		return;
//
//	inorder(node[s].first);
//	cout << s;
//	inorder(node[s].second);
//}
//
//void postorder(char s)
//{
//	if (node.find(s) == node.end())
//		return;
//
//	postorder(node[s].first);
//	postorder(node[s].second);
//	cout << s;
//}
