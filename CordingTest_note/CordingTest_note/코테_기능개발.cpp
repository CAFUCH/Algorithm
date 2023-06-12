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
//		progresses[i] = 100 - progresses[i]; //부족한 수를 구한다.
//
//		if (progresses[i] % speeds[i] != 0) // 95 1 == 5 1 == 4
//		{
//			q.push(progresses[i] / speeds[i] + 1); //큐에 몫을 넣어준다. (근데 1 왜 더한거지)
//		}
//		else { // 95 5 == 5 5 == 0
//
//			q.push(progresses[i] / speeds[i]); //큐에 몫을 넣어준다.
//		}
//	}
//
//	while (!q.empty()) //큐가 빌 때 까지 반복한다.
//	{
//		int cnt = 1;
//		int cur = q.front();
//		q.pop();
//
//		while (!q.empty() && cur >= q.front()) //더 큰 수가 나오지 않는다면
//		{
//			q.pop();
//			cnt++;
//		}
//		answer.push_back(cnt); //답에 cnt를 넣어준다.
//	}
//
//	return answer;
//}