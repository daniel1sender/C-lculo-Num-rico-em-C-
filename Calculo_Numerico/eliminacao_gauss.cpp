#include <iostream>

using namespace std;



int main()
{
	int n, i, j, k;	
	double A[20][20], x[10], c, soma=0.0;
	cin >> n;	

	for (j = 1 ; j <= n + 1 ; j++)
	{
		for (i = 1 ; i <= n ; i++)
		{
			cin >> A[i][j];
		}
	}
	
	//triangulacao
	for (j = 1 ; j <= n ; j++)
	{
		for (i = 1 ; i <= n ; i++)
		{

			if (i > j) 
			{		
				c = (-1)*(A[i][j]/A[j][j]);
				for (k = 1 ; k <= n + 1 ; k++)
				{	
					A[i][k] += c * A[j][k];
				} 	
			}
		}
	}
	
	for (j = 1 ; j <= n + 1 ; j++)
	{
		for (i = 1 ; i <= n ; i++)
		{
			cout << A[i][j] << endl ;
		}
	}
		
	//achar a solução
	x[n] = A[n][n + 1] / A[n][n];
	
	for (i = n - 1 ; i >= 1 ; i--)
	{
		soma = 0;
		for (j = i + 1 ; j <= n ; j++)
		{
			soma += x[j]*A[i][j];
		}
		x[i] = (A[i][n + 1]-soma)/A[i][j]; 	
	} 

	for (i = 0 ; i <= n ; i++)
	{
		//cout << "A solução é: " << x[i] << endl;
	}
}
