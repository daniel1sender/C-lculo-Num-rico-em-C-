#include <iostream>
#include <cmath>

using namespace std;

double f (double x)
{
	return pow (x , 2) + x - 6;
}

double der (double x)
{
	return 2*x + 1;
}

int main()
{
	double x0 = 0, eps = 0, x = 0, n =0, k = 0 ,x1 = 0;
	cin >> x0 >> eps >> n;

	while ((fabs(x-x0) <= eps) && (k < n))
	{	
		x = x0 - f(x0) / der(x0);
		x0 = x;
		k++;
cout << " Raiz aproximada: " << x << endl;
	}

}
