//#include <iostream>
//#include <list>
//using namespace std;
//
//int main() { //오류  못 찾는중
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
////	//https://www.acmicpc.net/problem/17827 //성공, 근데 시간초과;
////
////	ios_base::sync_with_stdio(false);
////	cin.tie(NULL);
////	cout.tie(NULL);
////
////	int n, m, v, num; //노드의 길이, 질문의 길이, 규칙의 길이, 값을 받을 변수
////
////	cin >> n >> m >> v;
////
////	list<int> nodes;
////
////	for (int i = 0; i < n; ++i) { //노드의 값을 입력 받는다
////
////		cin >> num;
////		nodes.push_back(num);
////	}
////
////	list<int>::iterator ls_top = nodes.begin(); //현재의 노드를 가르킬 변수
////	list<int>::iterator ls_begin = nodes.begin(); //재시작 지점을 가르킬 변수
////
////	//cout << *ls_begin << " ";
////
////	for (int i = 0; i < v - 1; ++i) //재시작의 위치를 지정해둔다
////		ls_begin++;
////
////	//cout << *ls_begin << endl;
////		//<< " " << *nodes.end();
////
////	while (m--) { //질문을 시작한다
////
////		cin >> num;
////		
////		while (num--) { //받은 규칙 길이 만큼
////
////			ls_top++; //현재의 노드 위치를 이동시키고
////
////			//만약 끝에 도달했다면 재시작 지점으로 돌려보낸다
////			if (ls_top == nodes.end())
////				ls_top = ls_begin; //원형큐와 비슷한 개념이지만 시작 지점이 다르다				
////		}
////
////		cout << *ls_top << '\n'; //그 위치의 노드의 값을 반환한다
////		ls_top = nodes.begin();
////	}
////}
////
