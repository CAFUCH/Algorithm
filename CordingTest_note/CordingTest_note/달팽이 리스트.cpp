//#include <iostream>
//#include <list>
//using namespace std;
//
//int main() { //����  �� ã����
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m, v, num;
//
//	cin >> n >> m >> v;
//
//	int list[200002];
//
//	for (int i = 1; i <= n; ++i)
//		cin >> list[i];
//
//	for (int i = 0; i < m; ++i) {
//
//		cin >> num;
//
//		if (num < n)
//			cout << list[1 + num] << '\n';
//		else
//			cout << list[v + ] << '\n'; //?
//	}
//}
//
////int main() {
////	//https://www.acmicpc.net/problem/17827 //����, �ٵ� �ð��ʰ�;
////
////	ios_base::sync_with_stdio(false);
////	cin.tie(NULL);
////	cout.tie(NULL);
////
////	int n, m, v, num; //����� ����, ������ ����, ��Ģ�� ����, ���� ���� ����
////
////	cin >> n >> m >> v;
////
////	list<int> nodes;
////
////	for (int i = 0; i < n; ++i) { //����� ���� �Է� �޴´�
////
////		cin >> num;
////		nodes.push_back(num);
////	}
////
////	list<int>::iterator ls_top = nodes.begin(); //������ ��带 ����ų ����
////	list<int>::iterator ls_begin = nodes.begin(); //����� ������ ����ų ����
////
////	//cout << *ls_begin << " ";
////
////	for (int i = 0; i < v - 1; ++i) //������� ��ġ�� �����صд�
////		ls_begin++;
////
////	//cout << *ls_begin << endl;
////		//<< " " << *nodes.end();
////
////	while (m--) { //������ �����Ѵ�
////
////		cin >> num;
////		
////		while (num--) { //���� ��Ģ ���� ��ŭ
////
////			ls_top++; //������ ��� ��ġ�� �̵���Ű��
////
////			//���� ���� �����ߴٸ� ����� �������� ����������
////			if (ls_top == nodes.end())
////				ls_top = ls_begin; //����ť�� ����� ���������� ���� ������ �ٸ���				
////		}
////
////		cout << *ls_top << '\n'; //�� ��ġ�� ����� ���� ��ȯ�Ѵ�
////		ls_top = nodes.begin();
////	}
////}
////
