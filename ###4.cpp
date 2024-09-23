//#include <iostream> 
//
//using namespace std;
//
//void ReadInfo(short& age,bool& driverLicense)
//{
//	cout << "please enter your age :\n";
//	cin >> age;
//	
//	cout << "please enter your diverLicense :\n";
//	cin >> driverLicense;
//}
//
//bool Check(short age, bool driverLicense)
//{
//	if (age > 21 && driverLicense)
//		return true;
//	else
//		return false;
//}
//
//void PrintResult(short age, bool driverLicense)
//{
//	if (Check(age, driverLicense))
//		cout << "Hired";
//	else
//		cout << "Rejected";
//}
//
//int main() 
//{
//	short age;
//	bool driverLicense;
//	
//	ReadInfo(age,driverLicense);
//	PrintResult(age, driverLicense);
//
//	return 0;
//}