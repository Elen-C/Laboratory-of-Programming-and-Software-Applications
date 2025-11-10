#include <iostream>
using namespace std;

int main() {

int i,j,k,space=2; 

for (j=1 ; j<=5 ; j=j+2)
{
	
	
	for (k=1 ; k<=space; k++)
	{
		cout << "  ";
	}
	for (i=1 ; i<=j ; i++)
	{
		cout << "* ";
	}
	
	cout << endl ;
	space = space-1;
 } 


    

    return 0;
}
