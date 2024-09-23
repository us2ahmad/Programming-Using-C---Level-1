//#include <iostream> 
//
//using namespace std;
//
//int main() 
//{
//	const short sec = 1;
//	const short min = sec * 60;
//	const short hour = min * 60;
//	const int day = hour * 24;
//	int inputSec;
//	short totalDay,totalHour,totalMin,totalSec;
//
//	cout << "Enter Seconds : \n";
//	cin >> inputSec;
//
//	totalDay = inputSec / day;
//	inputSec = inputSec - ( totalDay*day );
//
//	totalHour = inputSec / hour;
//	inputSec = inputSec - (totalHour * hour);
//
//	totalMin = inputSec / min;
//	inputSec = inputSec - (totalMin * min);
//	
//	totalSec = inputSec / sec;
//
//	cout <<"\n" << totalDay << ":" << totalHour << ":" << totalMin << ":" << totalSec<<"\n";
//
//}