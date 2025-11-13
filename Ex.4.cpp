#include <iostream>
using namespace std; 

int main()
{
	
	int array[5];
	int i, j, temp;
	
	for (i=0 ; i<5 ; i++)
	{
		cout << "Give number" << endl; 
		cin >> array[i] ;
	}

	
	temp = array[0];


for (j=0 ; j<4 ; j++)
{

for (i=j ; i<5 ; i++)
{
	if (array[i]<array[j])
	{
		temp = array[j];
		array[j] = array[i];
		array[i] = temp;
	}
}

}
	for (i=0 ; i<5 ; i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}