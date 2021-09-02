#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int limite,num,numPar,numImpar;
cout <<"Informe o limite ";
cin >>limite;
	for (num=1;num<=limite;num++){		
			cout << num << "\n";
			if (num%2==0) {
				numPar+=1;
			}
			else{
				numImpar+=1;
			}
	}
cout <<"Forma ao total de "<< limite << " numeros, foram contados: \n";
cout <<numPar << " Números pares.\n";
cout <<numImpar <<" Números ímpares.";
}
