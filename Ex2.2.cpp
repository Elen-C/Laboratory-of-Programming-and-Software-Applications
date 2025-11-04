#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c, delta ;
	double  x1, x2, y, vertex, real, imagine;
	
	cout << "Give a,b,c:" << endl;
	cin >> a >> b >> c;
	
	if (a==0)
	{
		cout << "This is not a quadratic function." << endl; 
		exit (0);
	}
	
	delta = b*b - 4*a*c;
    
	
	if (delta>0)
	{

	
	x1 = (-b + sqrt((double)delta))/(2.0*double(a));
	x2 = (-b - sqrt((double)delta))/(2.0*double(a));
		
	cout << "Two real roots:" << endl;
	cout << "x1= " << x1 << endl;
	cout << "x2= " << x2 << endl;
	}
	
    else if (delta == 0)
    {
    	x1 = -double(b)/(2.0*double(a));
	cout << "1 real root:" << endl;
	cout << "x= " << x1 << endl;
	}
	
	else 
	{ real = -double(b)/(2.0*double(a));
	imagine = sqrt(double(-delta))/(2.0*double(a));
	cout << "Two complex roots:" << endl;
	cout << "x1= " << real << "+" << imagine << "i" << endl;
	cout << "x2= " << real << "-" << imagine << "i" << endl;
	}

vertex = -double(b)/(2.0*double(a));
y = double(a)*vertex*vertex + double(b)*vertex + double(c);

cout << "The axis of symmetry is x= " << vertex << endl; 
cout << "The vertex is (x,y)=(" << vertex << ", " << y <<  ")" <<endl ;


}

