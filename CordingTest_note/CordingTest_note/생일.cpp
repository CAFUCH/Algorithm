//#include <iostream>
//using namespace std;
//
//struct student {
//
//	string name;
//	int day;
//	int month;
//	int year;
//};
//
//static bool operator> (const student& student1, const student& student2) {
//
//	if (student1.year != student2.year)
//		return student1.year > student2.year;
//	else if (student1.month != student2.month)
//		return student1.month > student2.month;
//	else if (student1.day != student2.day)
//		return student1.day > student2.day;
//
//	return false;
//}
//
//static bool operator< (const student& student1, const student& student2) {
//
//	if (student1.year != student2.year)
//		return student1.year < student2.year;
//	else if (student1.month != student2.month)
//		return student1.month < student2.month;
//	else if (student1.day != student2.day)
//		return student1.day < student2.day;
//
//	return false;
//}
//
//int main() {
//	// https://www.acmicpc.net/problem/5635
//
//	int n;
//	int d, m, y;
//	string name;
//
//	cin >> n;
//
//	student* arr = new student[n];
//
//	for (int i = 0; i < n; ++i)
//		cin >> arr[i].name >> arr[i].day >> arr[i].month >> arr[i].year;
//
//	student oldest = arr[0], youngest = arr[0];
//
//	for (int i = 0; i < n; ++i) {
//
//		if (arr[i] < oldest)
//			oldest = arr[i];
//		if (arr[i] > youngest)
//			youngest = arr[i];
//	}
//
//	cout << youngest.name << '\n' << oldest.name;
//}