#include <iostream>
using namespace std;
int main()
{
	const double ratio = 2.54;
	double i,Cm;
	cout << "Inch: ";
	cin >> i;
	Cm = ratio*i;
	cout <<"Cm= "<<Cm;
	return 0; 
}
