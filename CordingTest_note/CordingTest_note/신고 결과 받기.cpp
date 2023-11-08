//#include<iostream>
//#include <vector>
//#include <set>
//#include <unordered_map>
//using namespace std;
//
//vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//
//    vector<int>answer; // ����
//
//    unordered_map<string, set<string>> report_list; // �Ű���� ��� + �Ű��� ��� ��ϵ�
//    unordered_map<string, int> mail_count; //���� �޴� Ƚ��
//
//    for (int i = 0; i < id_list.size(); i++)
//        mail_count[id_list[i]] = 0;
//
//    for (int i = 0; i < report.size(); i++)
//    {
//        string reporter = report[i].substr(0, report[i].find(" ")); // �Ű���
//        string reported = report[i].substr(report[i].find(" ") + 1); // �Ű� ���ϴ� ��
//
//        // ���� �Ű� ���� �ָ� �Ű��� ���ξ� �߿� �Ű��ڰ� �־� ����? (�ᱹ �ߺ� �Ű� �ִ���...)
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
//    // ä������ 
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