#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
	return pow(x,3) - 9 * x + 3;
} 

bool condicao_parada(double x0, double x1, double eps)
{
	if (fabs(x1 - x0) < eps) return true;
	return false;
} 

double secante(double x0, double x1, double x2, double eps)
{
	while (condicao_parada(x0, x1, eps) == false)
	{
		x2 = x1 - ((f(x1)*(x1-x0))/(f(x1)-f(x0)));
		x0 = x1;
		x1 = x2;
		cout << "O valor de x é: " << x2 << endl;
		cout << "O erro absoluto é: " << fabs(x1-x0) << endl;
	}
	return x2;
} 

int main()
{
	double x = 0, x0 = 0, x1 = 0, x2 = 0, eps = 0;
	cin >> x0 >> x1 >> eps;
	
	secante(x0, x1, x2, eps);
	
	return 0;
}
