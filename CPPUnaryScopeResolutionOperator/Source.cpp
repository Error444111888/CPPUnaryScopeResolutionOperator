#include <iostream>

using namespace std;



double BTCPrice = 1000.111111443263545235; // This is the Global variable

int main()
{

	cout.precision(10); // Setting the result to show 10 digits total

	int BTCPrice = 5000; // This is the Local variable
	cout << BTCPrice << endl;
	cout << ::BTCPrice << endl; //<<< This calls the Global Variable instead of the local variable




	cin.get();
}