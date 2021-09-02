#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int ind,num1,num3,num5;
	num1=0;
	num3=0;
	num5=0;
	int dado[20];		
		for (ind=0;ind<=19;ind++){
			cout<<"Digite o "<<ind+1<<"º. número que caiu: ";
			cin>>dado[ind];
		}
		for(ind=0;ind<=19;ind++){
			switch(dado[ind]){
				case 1: num1++; break;
				case 3: num3++; break;
				case 5: num5++; break;
			}			
		}
	cout<<"O número 1 caiu "<<num1<<" vezes.\n"<<"O número 3 caiu "<<num3<<" vezes.\n"<<"O número 5 caiu "<<num5<<" vezes.\n";
}

