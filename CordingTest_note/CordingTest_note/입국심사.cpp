//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//long long solution(int n, vector<int> times) {
//
//    sort(times.begin(), times.end());
//
//    long long left = times.front(), right = (long long)times.front() * n; // Ž�� ���� ���ϱ�
//    long long time, people; 
//
//    while (left <= right)   
//    {
//        people = 0;
//        time = (left + right) / 2;
//
//        for (auto t : times)
//            people += time / t; // �־��� �ð����� ä�� ���ִ� ��� �� ���ϱ�
//
//        // �־��� �ð����� n�� �̻� ä�� �� �ִٸ�
//        if (people >= n)
//            right = time - 1;
//        else
//            left = time + 1;
//        // �־��� �ð����� n���� ä��� ��ƴٸ�
//    }
//
//    return left;
//}
//
//int main() {
//    //https://school.programmers.co.kr/learn/courses/30/lessons/43238
//
//    cout << solution(6, { 7, 10 });
//}