//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<int> solution(vector<int> arr) //https://school.programmers.co.kr/learn/courses/30/lessons/12906
//{
//    queue<int> q;
//
//    for (int i = 0; i < arr.size(); ++i)
//    {
//        if (!q.empty() && q.front() == arr.at(i))
//            continue;
//        else
//            q.push(arr[i]);
//    }
//
//    vector<int> answer;
//
//    while (!q.empty())
//    {
//        answer.push_back(q.front());
//        q.pop();
//    }
//    return answer;
//}
//
//int main() {
//
//    vector<int> v = { 1, 1, 3, 3, 0, 1, 1 };
//    solution(v);
//}