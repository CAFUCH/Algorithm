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
//    map<string, string> member; // id와 name 저장용도
//    string state, id, name; // 통
//
//    for (int i = 0; i < record.size(); i++) { // 안 돌아
//
//        cout << "들어옴";
//
//        stringstream stream(i);
//        stream >> state; stream >> id; stream >> name; // 한 세트를 받으면?
//
//        switch (state.at(0)) {
//
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
//    //for (auto i : answer) {
//
//    //    key = i.substr(0, i.find("님"));
//    //    i.replace(0, i.find("님"), member[key]);
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