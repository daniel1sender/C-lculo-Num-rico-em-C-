#include <iostream>
#include <vector>
#include <cmath>

#define PI 3.1415
using namespace std;

double tabela[2][2] = {{0,0},{PI,0}}; 							     //Povoando a matrix / primeira linha: {0,0} / segunda linha: {PI,0}	

double fx (double x)												// função a integrar
{
    double resultado;
    resultado = sin(x);
    return resultado;
}

double trapezioComposta (int n) 
{
    double h = (tabela[1][0] - tabela[0][0])/n;						//calculo do h					
    double integral = 0;
    vector<double> x;
    
    x.push_back(tabela[0][0]);										//acrescento zero ao vetor?								
    for (int j = 1; j <= n; j++)									// iteração para construir os valores de x da tabela somando h
    {
        x.push_back(x[j-1] + h);
		//cout << "vector " << x[j-1] << " j: " << j << endl;								
    }

    for (int i = 0; i < n; i++)
    {
        integral += (h/2)*(fx(x[i]) + fx(x[i+1]));		//calculo da integral (I = h/2 * (y0 + 2*y1 + 2*y2 + 2*y3 + y4)) (regra dos trapézios)
    }

    
    cout << "Integral para n = " << n << ": " << integral << endl;
    return integral;
}

double extrapolacao (double integral1, double integral2, double n1, double n2)
{
    double resultado = integral2 + (pow(n1,2)/(pow(n2,2) - pow(n1,2))*(integral2 - integral1));
    cout << "Extrapolacao: " << resultado << endl;
    return resultado;
}

int main () 
{
    extrapolacao (trapezioComposta(2), trapezioComposta(4), 2, 4);  // chama a função e acrescenta valores de entrada para as outras funções
    return 0;
}  
