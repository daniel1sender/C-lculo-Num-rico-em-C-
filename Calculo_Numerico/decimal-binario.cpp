//programa para transforma decimal em binario (tentativa)
//função push_back: nome_do_vetor.push_back(elemento) (acrescenta o elemento no final do vetor)
//função reverse: #include <algorithm>; reverse(nome_do_vetor.begin(),nome_do_vetor.end()); (inverte o vetor)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int numero, i=0; 
	vector<int> binario;
	
	cout<<"Digite um inteiro: "<<endl;
	
	cin>>numero;

	if (numero==0) binario.push_back(0);
	
	else
	{
		while (numero!=1)
		{
			binario.push_back(numero%2);
			numero=numero/2;
			i++;
		}
		binario[i+1]=1;
		reverse(binario.begin(), binario.end());
	}
	for (int j = 0; j < binario.size(); j++)
	{
		cout << binario[j]<<endl;;
	}	

}
