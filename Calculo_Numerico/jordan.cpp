#include <iostream>

using namespace std;

int main()
{
	int i, j, k, n;
	cin >> n;
	int A[20][20], x[10], c;
	
	for (j=1 ; j<=n+1 ; j++)
	{
		for (i=1 ; i<=n ; i++)
		{
			cin >> A[i][j];
		}
	}

	for (j=1 ; j<=n ; j++)
	{
		for (i=1 ; i<=n ; i++)
		{
			c = - (A[i][j]/A[j][j]);
			if (i > j)
			{
				A[i][j] += c * A[j][j]; 
			}
			if (i < j)
			{
				A[i][j] += c * A[j][j];
			}
		}
	}
	
	for (j=1 ; j<=n+1 ; j++)
	{
		for (i=1 ; i<=n ; i++)
		{
			if (i==j) x[i] = A[i][n+1];
		}
	}
	
	for (i=1 ; i<=n ; i++)
	{
		cout << "solucao: " << x[i] << endl;;
	}
	
	

	
}
