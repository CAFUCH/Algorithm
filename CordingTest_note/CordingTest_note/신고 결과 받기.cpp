//#include<iostream>
//#include <vector>
//#include <set>
//#include <unordered_map>
//using namespace std;
//
//vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//
//    vector<int>answer; // 정답
//
//    unordered_map<string, set<string>> report_list; // 신고당한 사람 + 신고한 사람 목록들
//    unordered_map<string, int> mail_count; //메일 받는 횟수
//
//    for (int i = 0; i < id_list.size(); i++)
//        mail_count[id_list[i]] = 0;
//
//    for (int i = 0; i < report.size(); i++)
//    {
//        string reporter = report[i].substr(0, report[i].find(" ")); // 신고자
//        string reported = report[i].substr(report[i].find(" ") + 1); // 신고 당하는 자
//
//        // 지금 신고 당한 애를 신고한 라인업 중에 신고자가 있어 없어? (결국 중복 신고가 있느냐...)
//        if (report_list[reported].find(reporter) == report_list[reported].end()) {
//
//            report_list[reported].insert(reporter);
//
//            if (report_list[reported].size() >= k) {
//
//                for (auto s : report_list[reported])
//                    mail_count[s]++;
//            }
//        }
//    }
//    // 채워보자 
//    for (auto mail : mail_count)
//        answer.push_back(mail.second);
//    return answer;
//}
//
//int main() {
//	// https://school.programmers.co.kr/learn/courses/30/lessons/92334
//
//    vector<int> b;
//    b = solution({ { "muzi" }, { "frodo" }, { "apeach" }, { "neo" } }
//    , { {"muzi frodo"},{"apeach frodo"},{"frodo neo"},{"muzi neo"},{"apeach muzi"} }, 2);
//
//    for (auto t : b)
//        cout << t << ", ";
//}