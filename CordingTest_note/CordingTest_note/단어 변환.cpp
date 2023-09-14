//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//bool islink(string a, string b) {
//    
//    int cnt = 0;
//
//    for (int i = 0; i < a.size(); ++i) {
//
//        if (a[i] != b[i]) cnt++;
//    }
//
//    return cnt == 1;
//}
//
//int solution(string begin, string target, vector<string> words) {
//
//    int answer = 0;
//    string now;
//
//    queue<string> q;
//    map<string, int> visited;
//    
//    q.push(begin);
//    visited[begin];
//
//    while (!q.empty()) {
//
//        now = q.front();
//        q.pop();
//
//        for (int i = 0; i < words.size(); ++i) {
//
//            if (visited.find(words[i]) == visited.end() && islink(now, words[i])) {
//
//                q.push(words[i]);
//                visited[words[i]] = visited[now] + 1;
//
//                if (words[i] == target) {
//
//                    answer = visited[words[i]];
//                    return answer;
//                }
//            }
//        }
//    }
//
//    return 0;
//}