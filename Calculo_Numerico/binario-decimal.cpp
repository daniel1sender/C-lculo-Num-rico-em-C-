//transforma binario em decimal 
//int p = binario.find-first-of('.') (função para achar a posiçaõ do elemento)

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
    string binario;
	int parteinteira = 0, partefrac = 0, var = 0;

	cout << "Digite o numero em binario: " << endl;
	cin >> binario;
	int p = binario.find_first_of('.');
	//cout<<"p "<<p<<endl; 
	//parte inteira
	for (int i = 0; i < p; i++)
	{
		if (binario[i] == '1')
		{
			parteinteira += pow(2, binario.size() - 1 - i);
		}
	}
	//cout<<parteinteira<<endl;
	//parte fracionária
	for (int j = p+1; j < binario.size(); j++)
	{
	var--;
	cout<<"var "<<var<<endl;
		if (binario[j] == '1')
		{
			partefrac += pow(2, var--);
		}
	}
	cout<<partefrac<<endl;
	//cout << "O valor em decimal e: " << parteinteira << "," << partefrac << endl;

	return 0;
}
