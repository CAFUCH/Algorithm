//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//vector<string> solution(vector<string> record) {
//	//https://school.programmers.co.kr/learn/courses/30/lessons/42888
//
//	vector<string> answer;
//	vector<pair<string, string>> log;
//	map<string, string> member;
//	string state, id, name, key;
//
//	for (auto s : record) {
//
//		stringstream stream(s);
//		stream >> state; stream >> id; stream >> name;
//
//		if (state == "Enter") {
//
//			//if (member.find(id) != member.end()) // iterator ����?
//			//	member[id] = name;
//			//else
//			//	member.insert(id, name);
//
//			member[id] = name;
//			log.push_back(make_pair(id, "���� ���Խ��ϴ�."));
//		}
//		else if (state == "Leave") {
//
//			log.push_back(make_pair(id, "���� �������ϴ�."));
//		}
//		else if (state == "Change") {
//
//			member[id] = name;
//		}
//	}
//
//	for (auto l : log) {
//
//		key = l.first;
//		answer.push_back(member[key] + l.second);
//	}
//
//	return answer;
//}
