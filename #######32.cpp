//#include <iostream>
//
//using namespace std;
//
//short ReadInputNumber()
//{
//	short number;
//	cout << "Please Enter number bigger zero\n";
//	cin >> number;
//
//	while (number <= 0)
//	{
//		cout << "Worng number ,	Please Enter number bigger zero	Again\n";
//		cin >> number;
//	}
//
//	return number;
//}
//
//short ReadInputPower()
//{
//	short number;
//	cout << "Please Enter Power \n";
//	cin >> number;
//
//	while (number < 0)
//	{
//		cout << "Worng number ,	Please Enter number bigger zero	Again\n";
//		cin >> number;
//	}
//	return number;
//}
//
//int main() 
//{
//	short number = ReadInputNumber();
//	short power = ReadInputPower();
//	short sum = 1, i = 1;
//	while (power>=i)
//	{
//		sum *= number;
//		i++;
//	}
//	cout << sum;
//	return 0;
//}