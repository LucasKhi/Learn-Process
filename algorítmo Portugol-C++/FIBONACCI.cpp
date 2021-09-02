#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	int numA,numB,cont,fib,numC;
	numA=0;
	numB=1;
    cout <<"qual número você deseja calcular? ";
    cin >>fib;
    cout<<numA<<" " <<numB<<" ";
	    for(cont=0;cont<fib;cont++){
           numC=numA+numB;
           cout <<numC<<" ";
           numA=numB;
           numB=numC;
        }
        cout <<"\n";
	
          }
