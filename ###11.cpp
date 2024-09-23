//#include <iostream> 
//
//using namespace std;
//
//void ReadMark(float marks[])
//{
//	cout << "please enter mark 1 : \n";
//	cin >> marks[0];
//	
//	cout << "please enter mark 2 : \n";
//	cin >> marks[1];
//	
//	cout << "please enter mark 3 : \n";
//	cin >> marks[2];
//
//}
//
//float GetAverage(float marks[])
//{
//	return (marks[0] + marks[1] + marks[2]) / 3;
//}
//
//bool CheckAverage(float avg)
//{
//	if (avg >= 50)
//		return true;
//	else
//		return false;
//}
//
//void PrintResult(float marks[])
//{
//	float avg = GetAverage(marks);
//		cout << avg << endl;
//
//	if (CheckAverage(avg))
//		cout << "Pass";
//	else
//		cout << "Fail";
//}
//
//int main()
//{
//	float marks[3];
//	ReadMark(marks);
//	PrintResult(marks);
//	return 0;
//}