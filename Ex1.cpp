#include <iostream>
using namespace std;

int main()
{
	int num, dig1, dig2, dig3;
	cout << "Give 3 digit integer:";
	cin >> num;
	
	dig1 = num/100;
	dig2 = (num%100)/10;
	dig3 = (num%100)%10;
	
	cout << "The number is " << dig3 << dig2 << dig1;
	
}