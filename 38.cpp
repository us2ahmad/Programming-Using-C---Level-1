//#include <iostream>
//using namespace std;
//
//enum eGender
//{
//	Male,
//	Female
//};
//
//struct stPersonalInformation 
//{
//	string name;
//	string country;
//	short age;
//	eGender gender;
//};
//
//void ReadPersonalInformation(stPersonalInformation& personalInfo)
//{
//	cout << "please enter name " << endl;
//	cin >> personalInfo.name;
//	
//	cout << "please enter country " << endl;
//	cin >> personalInfo.country;
//	
//	cout << "please enter age " << endl;
//	cin >> personalInfo.age;
//	
//	short inputGender;
//	cout << "please enter gender " << endl;
//	cin >> inputGender;
//	personalInfo.gender = eGender(inputGender);
//}
//
//void PrintPersonalInformation(stPersonalInformation personalInfo)
//{
//	cout << "name : " << personalInfo.name << endl;
//	cout << "country : " << personalInfo.country << endl;
//	cout << "age : " << personalInfo.age << endl;
//	cout << "gender : " << personalInfo.gender << endl;
//}
//
//int main() 
//{
//	stPersonalInformation personalInformation;
//	ReadPersonalInformation(personalInformation);
//	PrintPersonalInformation(personalInformation);
//
//	return 0;
//}