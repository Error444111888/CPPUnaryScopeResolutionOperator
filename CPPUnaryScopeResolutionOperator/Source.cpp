#include <iostream>


using namespace std;


double BTCPrice = 1000.11; // This is the Global variable


int main()
{
	int BTCPrice = 5000; // This is the Local variable
	cout << BTCPrice << endl;
	cout << ::BTCPrice << endl; //<<< This calls the Global Variable instead of the local variable




	cin.get();
}