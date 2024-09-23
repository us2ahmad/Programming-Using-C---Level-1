//#include <iostream>
//
//using namespace std;
/*
struct stAddress 
{
	string Country;
	string City;
	string Area;
	string Street;
};

struct stCustomer 
{
	string FullName;
	string PhoneNumber;
	stAddress Address;
};

struct stMaterial 
{
	short Number;
	string Name;
	float Price;
	short Qyt;
	
};

struct stOrderItem 
{
	short Number;
	stMaterial Material;

};

struct stOrder 
{
	stOrderItem Item;
	stCustomer Customer;
};


int main() 
{
	stOrder order1;

	order1.Customer.FullName = "Ahmed Tabash";
	order1.Customer.PhoneNumber = "0945917735";
	order1.Customer.Address.Street = "street 29";
	order1.Customer.Address.Area = "almeedin";
	order1.Customer.Address.City = "Damascus";
	order1.Customer.Address.Area = "Syria";

	order1.Item.Number = 1;
	order1.Item.Material.Number = 10 ;
	order1.Item.Material.Name = "apple";
	order1.Item.Material.Price = 100;
	order1.Item.Material.Qyt = 10;


	cout << "Customer Info :\n";
	cout << "Customer Name : " << order1.Customer.FullName << endl;
	cout << "Customer PhoneNumber : " << order1.Customer.PhoneNumber << endl;
	cout << "Customer Address Street : " << order1.Customer.Address.Street << endl;
	cout << "Customer Address Area : " << order1.Customer.Address.Area << endl;
	cout << "Customer Address City : " << order1.Customer.Address.City << endl;
	cout << "Customer Address Country : " << order1.Customer.Address.Country << endl;

	cout << "\nOrder Info : \n";

	cout << "Order Item Number : " << order1.Item.Number << endl;
	cout << "Order Item Material Number : " << order1.Item.Material.Number << endl;
	cout << "Order Item Material Name : " << order1.Item.Material.Name << endl;
	cout << "Order Item Material Price : " << order1.Item.Material.Price << endl;
	cout << "Order Item Material Quantity : " << order1.Item.Material.Qyt << endl;
	
	cout << "Order Total Price : " << order1.Item.Material.Qyt * order1.Item.Material.Price << endl;



}*/



///////////////////////HomeWork////////////////


//struct stPersonal 
//{
//	string FirstName;
//	string LastName;
//	short Age;
//	char Gender;
//	short Married;
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
//	card.personal.Gender = 'M';
//	card.personal.Married = 1;
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
//	cout << "Married : " << card.personal.Married<<  endl;
//
//	cout << "**************************************\n";
//}
//


