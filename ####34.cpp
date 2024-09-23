//#include <iostream>
//using namespace std;
//
//void ReadTotalSales(float& totalSales) 
//{
//	cout << "please enter your Total Sales :\n";
//	cin >> totalSales;
//}
//
//float GetCommissionPercentage(float totalSales)
//{
//	float percentage;
//
//	if (totalSales >= 1000000)
//		percentage = 0.01;
//
//	else if(totalSales >= 500000 && totalSales <= 1000000)
//		percentage = 0.02;
//
//	else if (totalSales >= 100000 && totalSales <= 500000)
//		percentage = 0.03;
//
//	else if (totalSales >= 50000 && totalSales <= 100000)
//		percentage = 0.05;
//	
//	else 
//		percentage = 0.00;
//
//	return percentage * totalSales;
//}
//
//
//int main() 
//{
//	float totalSales;
//	ReadTotalSales(totalSales);
//	cout << GetCommissionPercentage(totalSales);
//
//	return 0;
//}