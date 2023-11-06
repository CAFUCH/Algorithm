//#include <string>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//unordered_map<string, int> m;
//
//int solution(vector<vector<string>> clothes) {
//
//    int answer = 1;
//
//    for (int i = 0; i < clothes.size(); ++i)
//        m[clothes[i][1]]++;
//
//    for (auto n : m)
//        answer *= (n.second + 1);
//
//    return answer - 1;
//}

// map을 통해서 key = 의상 종류, value = 종류마다의 갯수를 저장한다.
// (갯수 + 1)를 곱해준다. (현재 선택한 의상의 종류를 사용하지 않았을 때를 고려해 1을 더해준다.)
// 마지막으로 아무것도 안 입었을 때를 제외한다. (모든 종류의 의상을 하나도 입지 않았을 경우는 1개 이므로 1을 빼준다.)