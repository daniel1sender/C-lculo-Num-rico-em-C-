#include <iostream>
#include <vector>
#include <cmath>

#define PI 3.1415
using namespace std;

double tabela[2][2] = {{3,0},{3.3,0}};

double f(double x)
{
	return sin(x);
}

double fx(double x)
{
	return pow(x,3) + pow(x,2) + x + 1;
}

double trapezioComposta(int n)
{
	double integral = 0;
	vector<double> x;
	x.push_back(tabela[0][0]);
	double h = (tabela[1][0] - tabela[0][0])/n;

	for (int j = 1 ; j<=n ; j++)
	{
		x.push_back(x[j-1] + h);
	}
	for (int i=0 ; i<n ; i++)
	{
		integral += (h/2)*(f(x[i])+f(x[i+1]));
	}

	cout << "O valor da integral para n= " << n << " : " << integral << endl;
    return integral;
}

double primeiraSimpsonComposta(int n)
{
	double h = (tabela[1][0] - tabela[0][0])/n;
	vector <double> x;
	x.push_back(tabela[0][0]);
	double integral = 0;

	for (int j = 0 ; j <= n ; j++)
	{
		x.push_back(x[j] + h);
	}

	integral = (h/3) * (fx(x[0]) + fx(x[n]));
	for (int i = 1 ; i < n ; i++)
	{
		if (i % 2 != 0)
 		integral += (h/3) * (4 * fx(x[i])); 
		else
		integral += (h/3) * (2 * fx(x[i]));
	}
	cout << "O valor da integral na regra de simpson composta para n = " << n << " : " << integral << endl;
	return integral;
}

double extrapolacao(double integral1, double integral2, double n1, double n2)
{
	double resultado = integral2 + (pow(n1,2)*(integral2 - integral1))/(pow(n1,2) - pow(n2,2));
	cout << "Extrapolação: " << resultado << endl;
	return resultado;
}

int main()
{
	//extrapolacao(trapezioComposta(2),trapezioComposta(4), 2, 4);
	primeiraSimpsonComposta(6);
	return 0;	
}
