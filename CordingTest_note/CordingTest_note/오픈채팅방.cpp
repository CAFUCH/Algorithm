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
//    map<string, string> member; // id와 name 저장용도
//    string state, id, name, key; // 통
//
//    for (int i = 0; i < record.size(); ++i) { // 안 돌아
//
//        stringstream stream(i);
//        stream >> state; stream >> id; stream >> name; // 한 세트를 받으면?
//
//        switch (state.at(0))
//        {
//            case 'E' :
//                member[id] = name;
//                answer.push_back(id + "님이 들어왔습니다.");
//                break;
//
//            case 'L' :
//                answer.push_back(id + "님이 나갔습니다.");
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
//        key = answer[i].substr(0, answer[i].find("님"));
//        answer[i].replace(0, answer[i].find("님"), member[key]);
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