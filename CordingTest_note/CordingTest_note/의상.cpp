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

// map�� ���ؼ� key = �ǻ� ����, value = ���������� ������ �����Ѵ�.
// (���� + 1)�� �����ش�. (���� ������ �ǻ��� ������ ������� �ʾ��� ���� ����� 1�� �����ش�.)
// ���������� �ƹ��͵� �� �Ծ��� ���� �����Ѵ�. (��� ������ �ǻ��� �ϳ��� ���� �ʾ��� ���� 1�� �̹Ƿ� 1�� ���ش�.)