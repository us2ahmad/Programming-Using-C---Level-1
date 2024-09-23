//#include <iostream>
//using namespace std;
//
//enum EDay
//{
//	SunDay = 1,
//	MonDay,
//	TuesDay,
//	WednesDay,
//	ThursDay,
//	FriDay,
//	SaturDay
//};
//void ReadInputs(EDay& eDay)
//{
//	short day;
//	
//	cout << "please enter Day :\n";
//	cin >> day;
//
//	eDay = EDay(day);	
//}
//
//void GetDay(EDay eDay)
//{
//	if (eDay == EDay::SunDay)
//		cout << "It's Sunday";
//
//	else if (eDay == EDay::MonDay)
//		cout << "It's Monday";
//
//	else if (eDay == EDay::TuesDay)
//		cout << "It's Tuesday";
//
//	else if (eDay == EDay::WednesDay)
//		cout << "It's Wednesday";
//
//	else if (eDay == EDay::ThursDay)
//		cout << "It's Thursday";
//
//	else if (eDay == EDay::FriDay)
//		cout << "It's Friday";
//
//	else if (eDay == EDay::SaturDay)
//		cout << "It's Saturday";
//
//	else cout << "Wrong Day";
//}
//
//int main() 
//{
//	EDay day;
//	ReadInputs(day);
//	GetDay(day);
//	
//	return 0;
//}