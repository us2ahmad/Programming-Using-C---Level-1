//#include<iostream>
//
//using namespace std;
//
//enum Gender {MALE,FEMALE};
//enum Status {Single, Married};
//
//struct stPersonal 
//{
//	string FirstName;
//	string LastName;
//	short Age;
//	Gender Gender;
//	Status Status;
//};
//
//struct stAddress 
//{
//	string City;
//	string Country;
//};
//
//struct stSalary 
//{
//	float MonthlySalary;
//	float YearlySalary;
//};
//
//struct stCard 
//{
//	stPersonal personal;
//	stAddress address;
//	stSalary salary;
//};
//
//int main() 
//{
//	stCard card;
//
//	card.personal.FirstName = "Ahmed";
//	card.personal.LastName = "Tabash";
//	card.personal.Age = 23;
//	card.personal.Gender = Gender::MALE;
//	card.personal.Status = Status::Single;
//	
//	card.address.City = "Damascus";
//	card.address.Country = "Syria";
//
//	card.salary.MonthlySalary = 1000;
//	card.salary.YearlySalary = card.salary.MonthlySalary * 12;
//
//	cout << "**************************************\n";
//	
//	cout << "Full Name : " << card.personal.FirstName << " " << card.personal.LastName << endl;
//	cout << "Age : " << card.personal.Age <<  endl;
//	
//	cout << "City : " << card.address.City <<  endl;
//	cout << "Country : " << card.address.Country <<  endl;
//	
//	cout << "Monthly Salary : " << card.salary.MonthlySalary <<  endl;
//	cout << "Yearly Salary : " << card.salary.YearlySalary <<  endl;
//	
//	cout << "Gender : " << card.personal.Gender <<  endl;
//	cout << "Married : " << card.personal.Status<<  endl;
//
//	cout << "**************************************\n";
//}
//
//
