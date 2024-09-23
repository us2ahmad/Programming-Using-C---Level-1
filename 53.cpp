#include <iostream> 


using namespace std;

int main() 
{
	short sum = 0;
	short number = 0;
	for (short i = 0; i < 5; i++)
	{
		cout << "please enter number " << i + 1 << " \n";
		cin >> number;
		
		if (number > 50)
			continue;

		sum += number;
		
	}
	cout << "sum entered numbers " << sum;

	return 0;
}