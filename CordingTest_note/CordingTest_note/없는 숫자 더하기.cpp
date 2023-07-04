//#include <string>
//#include <vector>
//#include <unordered_set>
//#include <iostream>
//using namespace std;
//
//int solution(vector<int> numbers) {
//    //https://www.programmers.co.kr/learn/courses/30/lessons/86051?language=cpp
//
//    int answer = 0;
//
//    unordered_set<int> un_set;
//    
//    for (int i = 0; i < numbers.size(); ++i)
//        un_set.insert(numbers.at(i));
//
//    for (int i = 0; i < 10; ++i) {
//
//        if (un_set.find(i) == un_set.end()) // ¾ø´Ù¸é
//            answer += i;
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<int> v = { 5,8,4,0,6,7,9 };
//    cout << solution(v);
//}