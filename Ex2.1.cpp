# include <iostream>
using namespace std;

int main()
{
	int cons;
	float price;
	cout << "Enter consumption value" << endl ;
	cin >> cons;
	
	if (cons<=0 || cons>4000)
	{
	cout << "Invalid consumption value." << endl ;
	exit(0);	
	}
	
	
	if ( cons<=500)
	{
		price = cons * 0.5 + 5;
		
	}
	else if (cons <=900)
	{
		price = 5 + 500*0.5 + (cons-500)*0.5*1.08;
	}
	else if (cons <= 1100)
	{
		price = 5 + 500*0.5 + 400*0.5*1.08 + (cons - 900)*0.5*1.08*1.12;
	}
	else 
	{
		price = 5 + 500*0.5 + 400*0.5*1.08 + 200*0.5*1.08*1.12 + (cons-1100)*0.5*1.08*1.12*1.20;
	}

	
	cout << "The price is " << price ;

	
return 0;
	
}