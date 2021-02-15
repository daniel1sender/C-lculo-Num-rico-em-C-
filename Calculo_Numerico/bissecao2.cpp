#include <iostream>
#include <cmath>

using namespace std;

//função
double f ( double x)
{
	double y = pow ( x , 3) - 9 * x + 3 ;
	return y;
}

double bissec ( double a , double b , double e)
{
	double x;
	while ( fabs ( a - b ) > e )
	{
		x = (a + b)/2;
	
		if ( f(a) * f(x) == 0)
		{
			cout << " A raiz do programa é :" << x << endl;
			break;
		}  
		else if ( f(a) * f(x) < 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	}
	x = (a + b)/2;
	return x;
}  

int main()
{

	double a = 0 , b = 0 , x = 0 , e = 0;
	cout << " Digite o intervalo e condição de parada :" << endl;	
	cin >> a >> b >> e;
	    
	x = bissec(a, b, e);
	cout << "raiz é : " << x << endl;	

	return 0;
}


