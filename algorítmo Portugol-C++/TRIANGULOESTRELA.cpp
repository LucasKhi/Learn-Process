#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
		int num,cont,res=1;
        cout<<"Insira um n�mero a ser fatorado: ";
        cin >>num;
        
		    for(cont=num;cont>=1;cont--){
               res*=cont;
            }
            cout<< num<<"!="<<res;
}
