//#include <iostream>
//
//using namespace std; 
//
//struct stpersonal 
//{
//	string firstname;
//	string lastname;
//	short age;
//	string phonenumber;
//};
//
//void RaedLength(short &length)
//{
//	cout << "Please enter the number of people you want to add : \n";
//	cin >> length;
//}
//
//void ReadPersonal(stpersonal& personal)
//{
//
//	cout << "please enter first name : \n";
//	cin >> personal.firstname;
//	
//	cout << "please enter last name : \n";
//	cin >> personal.lastname;
//
//	cout << "please enter age : \n";
//	cin >> personal.age;
//	
//	cout << "please enter phonenumber : \n";
//	cin >> personal.phonenumber;
//
//	cout << "***************************\n";
//	
//}
//
//void PrintPersonalinfo(stpersonal personal) 
//{
//	cout << "***************************\n";
//	cout << "firstname : " << personal.firstname << "\n";
//	cout << "lastname : " << personal.lastname << "\n";
//	cout << "age  : " << personal.age << "\n";
//	cout << "phonenumber : " << personal.phonenumber << "\n";
//	cout << "***************************\n";
//}
//
//void ReadPesonals(stpersonal persons[],short length)
//{
//	for (short i = 0 ; i < length; i++)
//	{
//		cout << "please eneter personal " << i + 1 << " info\n";
//		ReadPersonal(persons[i]);
//	}
//}
//
//void PrintPesonals(stpersonal persons[],short length)
//{
//	for (short i = 0 ; i < length ; i++)
//	{
//		cout << "personal " << i + 1 << " info\n";
//
//		PrintPersonalinfo(persons[i]);
//	}
//}
//
//
//int main() 
//{
//	stpersonal personals[100];
//	short length;
//	RaedLength(length);
//	ReadPesonals(personals, length);
//	PrintPesonals(personals, length);
//	
//	return 0;
//}