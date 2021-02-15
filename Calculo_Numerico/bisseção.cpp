#include <iostream>
#include <cmath>

using namespace std;

double f (double x)
{
	double fx = 4*pow (x , 3) - 5 * x - 1.5;
	return fx;  
}

int main()
{
	double a=0, b=0, x=0, eps=0;
	
	cout << " Digite o intervalor [a, b] e o eps :" << endl;
	cin >> a >> b >> eps;
		
	while ( fabs(a-b) > eps)	
	{
		x = (a + b)/2;
			
		// no caso de não existir raiz nesse intervalo (TVM) 
		if (f(a) * f(b) > 0)
		{
			cout << "não existem raizes nesse intervalo" << endl;
		}		

		// no caso do x ser a raiz
		else if (f(a) * f(x) == 0)
		{
			cout << "O valor final de x (raiz aproximada): " << x << endl;
			cout << "O erro absoluto |a - b|: " << fabs(a-b) << endl;
		}
		
		// no caso da raiz estar no lado esquerdo
		else if (f(a) * f(x) < 0)
		{
			b = x;
		}

		// no caso da raiz estar no lado direito
		else
		{
			a = x;
		}
		
		//para cada interação:		
		cout << "O valor final de x (raiz aproximada): " << x << endl;
		cout << "O erro absoluto |a - b|: " << fabs(a-b) << endl;
	}	
	
		//para o valor aproximado depois do while 
		x = (a+b)/2;
		cout << " valor final de x: " << x << endl;
		cout << "|b - a|: " << fabs(b-a) << endl;		

	return 0;
}

	 


