//#include <iostream>
//
//using namespace std; 
//
//struct stPersonal 
//{
//	string FirstName;
//	string LastName;
//	short Age;
//	string PhoneNumber;
//};
//
//void ReadPersonal(stPersonal& personal)
//{
//	cout << "Please Enter First Name : \n";
//	cin >> personal.FirstName;
//	
//	cout << "Please Enter Last Name : \n";
//	cin >> personal.LastName;
//
//	cout << "Please Enter Age : \n";
//	cin >> personal.Age;
//	
//	cout << "Please Enter PhoneNumber : \n";
//	cin >> personal.PhoneNumber;
//
//	cout << "***************************\n";
//}
//
//void PrintPersonalInfo(stPersonal personal) 
//{
//	cout << "***************************\n";
//	cout << "FirstName : " << personal.FirstName << "\n";
//	cout << "LastName : " << personal.LastName << "\n";
//	cout << "Age  : " << personal.Age << "\n";
//	cout << "PhoneNumber : " << personal.PhoneNumber << "\n";
//	cout << "***************************\n";
//}
//
//void ReadPesonals(stPersonal persons[])
//{
//	ReadPersonal(persons[0]);
//	ReadPersonal(persons[1]);
//}
//
//void PrintPesonals(stPersonal persons[])
//{
//	PrintPersonalInfo(persons[0]);
//	PrintPersonalInfo(persons[1]);
//}
//
//
//int main() 
//{
//	stPersonal personals[2];
//	ReadPesonals(personals);
//	PrintPesonals(personals);
//	
//	return 0;
//}