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
//	switch (eDay)
//	{
//	case EDay::SunDay:
//		cout << "It's Sunday";
//		break;
//
//	case EDay::MonDay:
//		cout << "It's Monday";
//		break;	
//
//	case EDay::TuesDay:
//		cout << "It's TuesDay";
//		break;	
//
//	case EDay::WednesDay:
//		cout << "It's WednesDay";
//		break;	
//	
//	case EDay::ThursDay:
//		cout << "It's ThursDay";
//		break;	
//	
//	case EDay::FriDay:
//		cout << "It's FriDay";
//		break;	
//	
//	case EDay::SaturDay:
//		cout << "It's SaturDay";
//		break;
//
//	default:
//	 cout << "Wrong Day";
//		break;
//	}
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