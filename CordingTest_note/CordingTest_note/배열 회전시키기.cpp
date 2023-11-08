//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//queue<int> q;
//vector<int> anwser;
//
//vector<int> solution(vector<int> numbers, string direction) {
//
//	for (int i = 0; i < numbers.size(); ++i)
//		q.push(numbers[i]);
//
//	if (direction == "right") {
//
//		for (int i = 1; i < numbers.size(); ++i) {
//
//			int temp = q.front();
//			q.pop();
//			q.push(temp);
//		}
//	}
//	else {
//
//		int temp = q.front();
//		q.pop();
//		q.push(temp);
//	}
//
//	while (q.size() > 0) {
//
//		anwser.push_back(q.front());
//		q.pop();
//	}
//
//	return anwser;
//}