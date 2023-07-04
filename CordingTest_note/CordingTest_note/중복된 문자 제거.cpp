//#include <string>
//#include <unordered_set>
//#include <iostream>
//using namespace std;
//
//string solution(string my_string) {
//    //https://www.programmers.co.kr/learn/courses/30/lessons/120888
//
//    string answer = "";
//
//    unordered_set<char> un_set;
//
//    for (int i = 0; i < my_string.length(); ++i) {
//
//        if (un_set.find(my_string.at(i)) == un_set.end()) { // ¾ø´Ù¸é
//
//            un_set.insert(my_string.at(i));
//            answer += my_string.at(i);
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    cout << solution("We are the world");
//}