//#include <iostream>
//using namespace std;
//
//enum EMonth
//{
//	January	= 1,
//	February = 2,
//	March = 3,
//	April = 4,
//	May = 5,
//	June = 6,
//	July = 7,
//	August = 8,
//	September = 9,
//	October = 10,
//	November = 11,
//	December = 12,
//};
//void ReadInputs(EMonth& eMonth)
//{
//	short month;
//	
//	cout << "please enter Month :\n";
//	cin >> month;
//
//	eMonth = EMonth(month);
//}
//
//void GetMonth(EMonth eMonth)
//{
//	switch (eMonth)
//	{
//	case EMonth::January:
//		cout << "It's January";
//		break;
//
//	case EMonth::February :
//		cout << "It's February";
//		break;
//
//	case  EMonth::March:
//		cout << "It's March";
//		break;
//
//	case EMonth::April:
//		cout << "It's April";
//		break;
//
//	case EMonth::May:
//		cout << "It's May";
//		break;
//
//	case EMonth::June:
//		cout << "It's June";
//		break;
//
//	case EMonth::July:
//		cout << "It's July";
//		break;
//
//	case EMonth::August:
//		cout << "It's August";
//		break;
//
//	case EMonth::September:
//		cout << "It's September";
//		break;
//
//	case EMonth::October:
//		cout << "It's October";
//		break;
//
//	case EMonth::November:
//		cout << "It's November";
//		break;
//
//	case EMonth::December:
//		cout << "It's December";
//		break;
//
//	default:
//		cout << "Wrong Month";	
//		break;
//	}
//}
//
//int main() 
//{
//	EMonth month;
//	ReadInputs(month);
//	GetMonth(month);
//	
//	return 0;
//}