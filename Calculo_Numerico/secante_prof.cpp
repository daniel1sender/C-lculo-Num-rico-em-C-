//  CÓDIGO A COMPLETAR!!!!!
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double fx (vector <double> funcao, double x)
{
	for (uint i = 0 ; i < funcao.size() ; i++)
		fx += funcao[i]*pow(x, funcao.size()- (i + 1));
	return fx;
}

double fx_linha (vector <double> funcao, double x)
{
	for (uint i = 0 ; i < funcao.size()-1 ; i++)
		fx_linha += (funcao.size()- (i + 1))*funcao[i]*pow(x, funcao.size()- (i + 1) - 1);
	return fx_linha;
}

bool criterio_de_parada (double x_ant, double x_prox, double eps)
{
	while (fabs (x_prox - x_ant) < eps) return true;
	return false;
}

double achar_chute_inicial (double inicio, double fim, vector <double> funcao, double eps)
{
	
}

int main()
{

}
