#include <iostream>
#include <cmath>

using namespace std;

double x[4][2] = {{0}};

void preencher_matriz(uint linha)
{
	for (uint i = 0 ; i < linha ; i++)
	{
		for (uint j = 0 ; j < 2 ; j++)
		{
			cin >> x[i][j];
		} 
	}

}

double interpolacao_lagrange (double x_final , int n)
{
	double somatoria = 0;
	double produtoria;

	for (int i = 0 ; i <= n ; i++)
	{	
		produtoria = 1;	
		for (int j = 0 ; j <= n ; j++)
		{
			if (i != j)
			{
				produtoria *= ((x_final - x[j][0])/(x[i][0] - x[j][0]));
			}
 		}
		somatoria += x[i][1]*produtoria;
	}
	cout << "P_" << n << "(" << x_final << "): " << somatoria << endl;
	return somatoria;
}

int main()
{
	preencher_matriz(4);
	interpolacao_lagrange(0.3,3);

	return 0;
}
