//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main() { //230515_���� Ȱ�� ����
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
//		cin >> input; //�� �ޱ�
//
//		st.push(input); //�ϴ� ���� �ְ�
//
//		s += 'P'; //���� �߰�
//
//		while (!st.empty() && st.top() == num) //������ ������� �����鼭 ���� ���� ���� num�� ���ٸ�
//		{
//			s += 'O'; //���� �߰�
//			num++; //num ����
//			st.pop(); //���� pop���ֱ�
//		}
//	}
//
//	if (st.empty())
//		cout << s;
//	else
//		cout << "impossible";
//}