//int p = binario.find-first-of('.')

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
    string binario;
	int parteinteira = 0, partefrac = 0, var = 0;
	int p = binario.find-first-of('.')	

	cout << "Digite o numero em binario: " << endl;
	cin >> binario;
	
	//Primeira maneira de calcular o valor em decimal
	for (int i = 0; i < p; i++)
	{
		if (binario[i] == '1')
		{
			parteinteira += pow(2, binario.size() - 1 - i);
		}
	}
	for (int j = p; j < binario.size(); j++)
	{
	var--;
		if (binario[i] == '1')
		{
			partefrac += pow(2, var--)
		}
	}
	cout << "O valor em decimal e: " << parteinteira << "," << partefrac << endl;

	return 0;
}
