//#include <iostream>
//#include <string>
//#include <deque>
//using namespace std;
//
//int main() {
//
//	int n, numSize;
//	string order, nums, num = "";
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) { //총 횟수만큼 반복
//
//		bool isR = false, isE = false;
//
//		deque<int> dq;
//
//		cin >> order >> numSize >> nums; //명령, 갯수, 값
//
//		for (int j = 0; j < nums.size(); ++j) {	// [n,n,n,n]
//
//			if (nums[j] >= '0' && nums[j] <= '9') //숫자라면 42?
//				num += nums[j]; //string에 순서대로 숫자만 저장 nnnn
//
//			else if (nums[j] == ',' || nums[j] == ']') { //숫자가 아니라면
//
//				if (!num.empty()) { //비어있지 않다면
//
//					dq.push_back(stoi(num)); //넣는다 지금까지의 값
//					num = ""; //num 초기화
//				}
//			}
//		}
//		for (int k = 0; k < order.size(); ++k) {
//
//			if (order[k] == 'R')
//				isR = !isR;
//
//			else if (order[k] == 'D') {
//
//				if (dq.empty()) {
//
//					cout << "error\n";
//					isE = true;
//					break;
//				}
//
//				if (isR)
//					dq.pop_back();
//				else
//					dq.pop_front();
//			}
//		}
//
//		if (!isE) {
//
//			cout << '[';
//			while (!dq.empty())
//			{
//				if (isR) {
//					cout << dq.back();
//					dq.pop_back();
//				}
//				else
//				{
//					cout << dq.front();
//					dq.pop_front();
//				}
//
//				if (dq.size() >= 1)
//					cout << ',';
//			}
//			cout << ']' << '\n';
//		}
//	}
//}