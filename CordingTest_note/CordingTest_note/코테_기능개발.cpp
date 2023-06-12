//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <stack>
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) { 
//	https://school.programmers.co.kr/learn/courses/30/lessons/42586
//	
//	queue<int> q;
//	vector<int> answer;
//	stack<int> st;
//
//	for (int i = 0; i < progresses.size(); ++i)
//	{
//		progresses[i] = 100 - progresses[i]; //������ ���� ���Ѵ�.
//
//		if (progresses[i] % speeds[i] != 0) // 95 1 == 5 1 == 4
//		{
//			q.push(progresses[i] / speeds[i] + 1); //ť�� ���� �־��ش�. (�ٵ� 1 �� ���Ѱ���)
//		}
//		else { // 95 5 == 5 5 == 0
//
//			q.push(progresses[i] / speeds[i]); //ť�� ���� �־��ش�.
//		}
//	}
//
//	while (!q.empty()) //ť�� �� �� ���� �ݺ��Ѵ�.
//	{
//		int cnt = 1;
//		int cur = q.front();
//		q.pop();
//
//		while (!q.empty() && cur >= q.front()) //�� ū ���� ������ �ʴ´ٸ�
//		{
//			q.pop();
//			cnt++;
//		}
//		answer.push_back(cnt); //�信 cnt�� �־��ش�.
//	}
//
//	return answer;
//}