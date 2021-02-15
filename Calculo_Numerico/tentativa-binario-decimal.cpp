#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

int inteiro, fracionario, decimal, i, j, var=0, binario, aux;
cin>>binario;
aux=binario.size();

for(k=0;k<aux;k++)
{
	cin>>binario[k];
}

int p = binario.find_first_of('.');

for(i=0;i<p;i++)
{
inteiro[i]=binario[i];
	if(inteiro[i] == '1')
	{
	inteiro += pow(2, binario.size() - 1 - i);
	}
}

for(j=p+1;j<=binario.size();j++)
{
fracionario[j]=binario[j];
var--;	
	if(fracionario[j] == '1')
	{
	fracionario += pow(2, var);
	}
}

cout<<inteiro<<","<<fracionario<<endl;
}


//int p = binario.find-first-of('.')
