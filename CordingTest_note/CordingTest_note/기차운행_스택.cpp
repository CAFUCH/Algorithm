//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main() { //230515_스택 활용 문제
//
//	int n, input;
//	int num = 1;
//	string s = "";
//	
//	stack<int> st;
//
//	cin >> n;
//
//	while (n--) { //213
//
//		cin >> input; //값 받기
//
//		st.push(input); //일단 차고에 넣고
//
//		s += 'P'; //글자 추가
//
//		while (!st.empty() && st.top() == num) //스택이 비어있지 않으면서 가장 위의 값이 num과 같다면
//		{
//			s += 'O'; //글자 추가
//			num++; //num 증가
//			st.pop(); //스택 pop해주기
//		}
//	}
//
//	if (st.empty())
//		cout << s;
//	else
//		cout << "impossible";
//}