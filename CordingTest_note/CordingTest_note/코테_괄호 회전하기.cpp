//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//bool isCorrect(string s, int start) {
//
//    stack<char> v;
//
//    for (int i = 0; i < s.length(); ++i) {
//
//        char ch = s[(start + i) % s.length()];
//
//        switch (ch)
//        {
//        case '(' :
//        case '{' :
//        case '[' :
//            v.push(ch);
//            break;
//        case ')' :
//        case '}' :
//        case ']' :
//            v.pop();
//            break;
//        }
//    }
//
//    if (s.empty()) return true;
//    else return false;
//}
//
//int solution(string s) {
//	//https://school.programmers.co.kr/learn/courses/30/lessons/76502
//
//    //string str;
//
//    //for (int i = 0; i < s.length(); ++i) { // 글자 길이 만큼
//
//    //    stack<char> v; // 스택 새로 맹글어
//    //    str = s; // 한 번 반복할 때마다 str 초기화
//
//    //    for (int j = 0; j < i; ++j) { // 현재 반복 횟수만큼 반복
//
//    //        str.push_back(str.front()); //앞에 있는 거 뒤로 넣는다
//    //        str.erase(0, 1); //앞에꺼 하나 지움 ㅇㅇ
//    //        str = str.substr(0, str.length()); //? 아마 인덱스 채워주는 용도
//    //    }
//
//    //    for (int j = 0; j < str.length(); ++j) { // 문자열 길이만큼 반복
//
//    //        if (str.at(j) == '{' || str.at(j) == '[' || str.at(j) == '(') { //현재 문자가 { [ ( 하나라면
//
//    //            v.push(str.at(j)); //현재 글자는 넣는다
//    //        }
//    //        else { // } ] ) 라면
//
//    //            if (!v.empty()) { //안 비어 있으면
//
//    //                if (v.top() == '{' && s.at(j) == '}') { //가장 최신의 것이 { 면서 현재가 } 일 때
//
//    //                    v.pop(); //pop 해주고
//    //                    answer++; //하나 맞는 걸로 처리
//    //                }
//    //                else if (v.top() == '[' && s.at(j) == ']') {
//
//    //                    v.pop();
//    //                    answer++;
//    //                }
//    //                else if (v.top() == '(' && s.at(j) == ')') {
//
//    //                    v.pop();
//    //                    answer++;
//    //                }
//    //                else
//    //                    break;
//    //            }
//    //            else //비어있다면 break
//    //                break;
//    //        }
//    //    }   
//    //}
//
//    int answer = 0;
//
//    for (int i = 0; i < s.length(); ++i) {
//
//        if (isCorrect(s, i))
//            answer++;
//    }
//
//    return answer;
//}