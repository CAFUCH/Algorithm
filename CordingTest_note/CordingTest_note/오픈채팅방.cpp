//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <sstream>
//
//using namespace std;
//
//vector<string> solution(vector<string> record) {
//
//    vector<string> answer;
//    map<string, string> member; // id�� name ����뵵
//    string state, id, name; // ��
//
//    for (int i = 0; i < record.size(); i++) { // �� ����
//
//        cout << "����";
//
//        stringstream stream(i);
//        stream >> state; stream >> id; stream >> name; // �� ��Ʈ�� ������?
//
//        switch (state.at(0)) {
//
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
//    //for (auto i : answer) {
//
//    //    key = i.substr(0, i.find("��"));
//    //    i.replace(0, i.find("��"), member[key]);
//    //}
//
//    return answer;
//}
//
//int main() {
//    
//    vector<string> d { "Enter uid1234 Muzi", "Enter uid4567 Prodo", "Leave uid1234", "Enter uid1234 Prodo", "Change uid4567 Ryan" };
//    vector<string> ans = solution(d);
//
//    for (auto a : ans)
//        cout << a;
//}