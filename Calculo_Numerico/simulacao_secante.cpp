#include <iostream>
#include <cmath>

using namespace std;

double f (double x, int a, int b, int c) //podemos usar vector para uam função genérica
{
double fx = a*pow(x,3) - b * x + c;
return fx;
}

double der (double x, int a, int b)
{
return 3 * a * pow(x,2) - b;
}

double der2 (double x, int a)
{
return a * 2 * x;
}

double teste1 ( double g)
{
while (false)
{
cin >> g;
if (f(g) * der2(g) > 0)
{
break;
  }
}
return g;
}
double teste2 ( double h)
{
while (false)
{
cin >> h;
if (f(h) * der2(h) > 0)
{
break;
  }
}
return h;
}


int main()
{
double der, fx, eps = 0, a, b, x2, x1, x0;
cin>>a>>b>>eps;

x0 = teste1 ( double g);
x1 = teste2 ( double h);

while (fabs(x2-x1) > eps)
{
	x2 = x1 - f(x1)*(x1-x0)/(f(x1)-f(x0));
	x0 = x1;
	x1 = x2;
	cout << " O valor de x é: " << x2 << endl;
	cout << " O erro absoluto é: " << fabs(x2-x1) << endl;
}

}
