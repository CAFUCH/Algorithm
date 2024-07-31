//#include <iostream>
//using namespace std;
//
//int YearLeap(int yy)
//{
//	if (yy % 400 == 0)
//		return 366;
//	else if (yy % 4 == 0 && yy % 100 != 0)
//		return 366;
//	else
//		return 365;
//}
//
//int Day(int leapDay, int mm, int oldmm, int dd)
//{
//	int day = dd;
//	if (leapDay == 366)
//	{
//		for (int i = oldmm; i < mm; ++i)
//		{
//			if (i == 2)
//				day += 29;
//			else
//			{
//				if (i >= 8)
//				{
//					if ((i + 1) % 2 == 0)
//						day += 30;
//					else
//						day += 31;
//				}
//				else
//				{
//					if (i % 2 == 0)
//						day += 30;
//					else
//						day += 31;
//				}
//			}
//		}
//	}
//	else
//	{
//		for (int i = oldmm; i < mm; ++i)
//		{
//			if (i >= 8)
//			{
//				if ((i + 1) % 2 == 0)
//					day += 30;
//				else
//					day += 31;
//			}
//			else
//			{
//				if (i % 2 == 0)
//					day += 30;
//				else
//					day += 31;
//			}
//		}
//	}
//	return day;
//}
//
//int main()
//{
//	int y, y2, m, m2, d, d2;
//	int day = 0;
//
//	cin >> y >> m >> d;
//	cin >> y2 >> m2 >> d2;
//
//	if (YearLeap(y) == 366)
//		day += (366 - Day(366, m, 1, d));
//	else
//		day += (365 - Day(365, m, 1, d));
//
//	for (int i = y + 1; i < y2; ++i)
//		day += YearLeap(i);
//
//	if (y < y2 && m < m2)
//	{
//		if (YearLeap(y2) == 366)
//			day += Day(366, m2, m, d2);
//		else
//			day += Day(365, m2, m, d2);
//	}
//	else
//		day += d2;
//
//	//if (y == y2)
//	//	cout << "D-" << Day(YearLeap(y), m2, d2) - Day(YearLeap(y), m, d);
//	if (y == y2)
//	{
//		if (YearLeap(y) == 365) {
//			cout << "D-" << Day(y2, m2, m, d2) - Day(y, m, 1, d);
//		}
//		else {
//			cout << "D-" << Day(y2, m2, m, d2) - Day(y, m, 1, d);
//		}
//	}
//	else if (y2 - y > 1000 || (y2 - y == 1000 && (m < m2 || (m <= m2 && d <= d2))))
//		cout << "gg";
//	else
//		cout << "D-" << day;
//}

//#include <iostream>
//using namespace std;
//
//int IsLeapYear(int y)
//{
//    if (y % 400 == 0)
//        return 366;
//    else
//    {
//        if (y % 100 == 0)
//            return 365;
//        else
//        {
//            if (y % 4 == 0)
//                return 366;
//            else
//                return 365;
//        }
//    }
//}
//
//int CounDay(int a[13], int y, int m, int d)
//{
//    int b = d;
//    for (int i = 1; i < m; i++)
//        b += a[i];
//    return b;
//}
//
//int day = 0;
//int nomal[13] = { 365, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int leap[13] = { 366, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//int main()
//{
//    int y1, m1, d1, y2, m2, d2;
//    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
//
//    if (IsLeapYear(y1) == 365)
//        day += (365 - CounDay(nomal, y1, m1, d1));
//    else
//        day += (366 - CounDay(leap, y1, m1, d1));
//
//    for (int i = y1 + 1; i < y2; i++)
//        day += IsLeapYear(i);
//
//    if (IsLeapYear(y2) == 365)
//        day += CounDay(nomal, y2, m2, d2);
//
//    else
//        day += CounDay(leap, y2, m2, d2);
//
//    if (y1 == y2)
//    {
//        if (IsLeapYear(y1) == 365)
//            cout << "D-" << CounDay(nomal, y2, m2, d2) - CounDay(nomal, y1, m1, d1);
//        else 
//            cout << "D-" << CounDay(leap, y2, m2, d2) - CounDay(leap, y1, m1, d1);
//    }
//    else if (y2 - y1 > 1000 || (y2 - y1 == 1000 && (m1 < m2 || (m1 == m2 && d1 <= d2))))
//        cout << "gg";
//    else
//        cout << "D-" << day;
//}