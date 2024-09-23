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
//	if (eMonth == EMonth::January)
//		cout << "It's January";
//
//	else if (eMonth == EMonth::February)
//		cout << "It's February";
//
//	else if (eMonth == EMonth::March)
//		cout << "It's March";
//
//	else if (eMonth == EMonth::April)
//		cout << "It's April";
//
//	else if (eMonth == EMonth::May)
//		cout << "It's May";
//
//	else if (eMonth == EMonth::June)
//		cout << "It's June";
//
//	else if (eMonth == EMonth::July)
//		cout << "It's July";
//	
//	else if (eMonth == EMonth::August)
//		cout << "It's August";	
//	
//	else if (eMonth == EMonth::September)
//		cout << "It's September";
//
//	else if (eMonth == EMonth::October)
//		cout << "It's October";
//
//	else if (eMonth == EMonth::November)
//		cout << "It's November";
//	
//	else if (eMonth == EMonth::December)
//		cout << "It's December";
//
//	else cout << "Wrong Month";
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