//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <sstream>
//
//using namespace std;
//
//vector<string> solution(vector<string> record) {
//    //https://school.programmers.co.kr/learn/courses/30/lessons/42888
//
//    vector<string> answer;
//    map<string, string> member; // id�� name ����뵵
//    string state, id, name, key; // ��
//
//    for (int i = 0; i < record.size(); ++i) { // �� ����
//
//        stringstream stream(i);
//        stream >> state; stream >> id; stream >> name; // �� ��Ʈ�� ������?
//
//        switch (state.at(0))
//        {
//            case 'E' :
//                member[id] = name;
//                answer.push_back(id + "���� ���Խ��ϴ�.");
//                break;
//
//            case 'L' :
//                answer.push_back(id + "���� �������ϴ�.");
//                break;
//
//            case 'C' : 
//                member[id] = name;
//                break;
//        }
//    }
//
//    for (int i = 0; i < record.size(); ++i) {
//
//        key = answer[i].substr(0, answer[i].find("��"));
//        answer[i].replace(0, answer[i].find("��"), member[key]);
//    }
//
//    for (int i = 0; i < answer.size(); ++i)
//        cout << answer[i] << endl;
//    return answer;
//}
//
//int main() {
//    
//    vector<string> d = { "Enter uid1234 Muzi", "Enter uid4567 Prodo", "Leave uid1234", "Enter uid1234 Prodo", "Change uid4567 Ryan" };
//    solution(d);
//}