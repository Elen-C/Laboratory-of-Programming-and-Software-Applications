#include <iostream>
using namespace std;
int main () {

int i,j;

for (j=1 ; j<=5 ; j++)
{

for (i=1 ; i<=j ; i++)
{
	cout << "* " ;
}

cout << endl;

}


for (j=1 ; j<=5 ; j++)
{

for (i=5 ; i>=j ; i--)
{
	cout << "* " ;
}

cout << endl;

}







}