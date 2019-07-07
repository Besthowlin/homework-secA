#include <iostream>
using namespace std;
int main()
{
	float C;
	cout << "Enter Celsius temperature : " ;
	cin >> C ;
	float result;
	result = ((C)*9/5)+32;
	cout << "Fahrenhieit = " ;
	cout << result << endl;
	cout << ((result >= 70 ) ? "Now weath in Thailand is hot" : "Now weath in Thailand is cool") << endl;
	return(0);
}