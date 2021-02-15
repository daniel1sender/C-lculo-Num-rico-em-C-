#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
	return pow (x , 3) - x - 1; 
}

double phi(double x)
{
	return pow ((x + 1) , 1/3.0);
}	

double der_phi(double x)
{
	return (1/3)*pow((x+1), -2/3.0);
}

double verifica (double x)
{
	if (fabs(der_phi(x)) < 1) return true;
	return false; 
}

double parada(double x0, double x1, double eps)
{
	if (fabs(x1-x0) < eps) return true;
	return false;
}


int main()
{
	double x0 = 0, x1 = 0, eps = 0, a, b;
	cin >> a >> b >> x1 >> eps;

	if (verifica(x1) == true)
	cout << "Converge" << endl;
		while (parada(x0, x1, eps) == false)
		{
			x0 = x1;
			x1 = phi(x0);
			cout << "O valor de x é: " << x1 << " " << x0 << endl;
			cout << "Erro absoluto: " << fabs(x1-x0) << endl;
		}
	cout << "O valor de x final é: " << x1 << endl;
	return 0;
}
