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
//    //for (int i = 0; i < s.length(); ++i) { // ���� ���� ��ŭ
//
//    //    stack<char> v; // ���� ���� �ͱ۾�
//    //    str = s; // �� �� �ݺ��� ������ str �ʱ�ȭ
//
//    //    for (int j = 0; j < i; ++j) { // ���� �ݺ� Ƚ����ŭ �ݺ�
//
//    //        str.push_back(str.front()); //�տ� �ִ� �� �ڷ� �ִ´�
//    //        str.erase(0, 1); //�տ��� �ϳ� ���� ����
//    //        str = str.substr(0, str.length()); //? �Ƹ� �ε��� ä���ִ� �뵵
//    //    }
//
//    //    for (int j = 0; j < str.length(); ++j) { // ���ڿ� ���̸�ŭ �ݺ�
//
//    //        if (str.at(j) == '{' || str.at(j) == '[' || str.at(j) == '(') { //���� ���ڰ� { [ ( �ϳ����
//
//    //            v.push(str.at(j)); //���� ���ڴ� �ִ´�
//    //        }
//    //        else { // } ] ) ���
//
//    //            if (!v.empty()) { //�� ��� ������
//
//    //                if (v.top() == '{' && s.at(j) == '}') { //���� �ֽ��� ���� { �鼭 ���簡 } �� ��
//
//    //                    v.pop(); //pop ���ְ�
//    //                    answer++; //�ϳ� �´� �ɷ� ó��
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
//    //            else //����ִٸ� break
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