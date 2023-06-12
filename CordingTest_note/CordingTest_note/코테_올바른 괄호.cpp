//#include <iostream>
//#include <stack>
//using namespace std;
//
//bool solution(string s) { //https://school.programmers.co.kr/learn/courses/30/lessons/12909
//
//    stack<int> st;
//
//    bool answer = true;
//
//    for (int i = 0; i < s.size(); ++i) {
//
//        if (s[i] == '(') {
//
//            st.push(s[i]);
//        }
//        else {
//
//            if (!st.empty())
//                st.pop();
//            else
//                answer = false;
//        }
//    }
//
//    return answer && st.empty();
//}