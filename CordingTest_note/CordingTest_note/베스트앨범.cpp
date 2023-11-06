//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//#include <unordered_set>
//using namespace std;
//
//struct music
//{
//    int index, count;
//};
//
//// 총 재생수 기준으로 내림차순
//bool cmp1(pair<string, pair<int, vector<music>>>& left, pair<string, pair<int, vector<music>>>& right)
//{
//    return left.second.first > right.second.first;
//}
//
//// 재생수 기준으로 내림차순 (곡 수가 똑같다면 인덱스 순서)
//bool cmp2(music left, music right)
//{
//    if (left.count == right.count)
//        return left.index < right.index;
//    return left.count > right.count;
//}
//
//vector<int> solution(vector<string> genres, vector<int> plays) {
//    //https://school.programmers.co.kr/learn/courses/30/lessons/42579
//
//    vector<int> answer;
//
//    // 장르, 총재생수, 곡 번호, 곡 재생수
//    unordered_map<string, pair<int, vector<music>>> total_m;
//
//    // map에 장르에 맞게 총 재생수와 곡 번호 마다의 재생수 저장
//    for (auto i = 0; i < genres.size(); i++) {
//
//        total_m[genres[i]].first += plays[i];
//        total_m[genres[i]].second.push_back({ i, plays[i] });
//    }
//
//    // vector로 옮기고
//    vector<pair<string, pair<int, vector<music>>>> total_v{ total_m.begin(), total_m.end() };
//
//    // 장르별 총 재생수 내림차순 정렬
//    sort(total_v.begin(), total_v.end(), cmp1);
//
//    for (auto item : total_v) {
//
//        int cnt = 0;
//        sort(item.second.second.begin(), item.second.second.end(), cmp2); // 장르별 곡 재생수 내림차순 정렬
//
//        for (int i = 0; i < item.second.second.size(); ++i) {
//
//            if (cnt == 2) break;
//
//            answer.push_back(item.second.second[i].index); // 이설아가 쓰고 실패한 한 줄
//            cnt++;
//        }
//    }
//
//    return answer;
//}