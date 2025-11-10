#include <iostream>
#include <cmath>

using namespace std;
int main () {
	
	int x, i, flag=0;
	float orio, pil;

	do {
	cout << "Dose thetiko x" << endl;
	cin >>x;
}while (x<0);

orio = sqrt(float(x));	

 for (i=2 ; i<=orio ; i++)
 {
 	pil = x%i;
 	
 	if (pil==0)
 	{
 		cout << "not protos" ;
 
 		flag == 1;
 		exit (0);
 		break ;
	 }
 }

if (flag ==0)
{
	cout << "Protos";
}
	
}