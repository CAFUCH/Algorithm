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
//	for (int i = 0; i < n; ++i) { //�� Ƚ����ŭ �ݺ�
//
//		bool isR = false, isE = false;
//
//		deque<int> dq;
//
//		cin >> order >> numSize >> nums; //���, ����, ��
//
//		for (int j = 0; j < nums.size(); ++j) {	// [n,n,n,n]
//
//			if (nums[j] >= '0' && nums[j] <= '9') //���ڶ�� 42?
//				num += nums[j]; //string�� ������� ���ڸ� ���� nnnn
//
//			else if (nums[j] == ',' || nums[j] == ']') { //���ڰ� �ƴ϶��
//
//				if (!num.empty()) { //������� �ʴٸ�
//
//					dq.push_back(stoi(num)); //�ִ´� ���ݱ����� ��
//					num = ""; //num �ʱ�ȭ
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