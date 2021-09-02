#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");	
	int ind;
	int jogadasA[10],jogadasB[10];
	int winA=0,winB=0,total=0;
		for (ind=0;ind<=9;ind++){
			cout<<ind+1<<"º JOGADA \n";
			cout<<"Numero do jogador A: ";
			cin>>jogadasA[ind];
			cout<<"Numero do jogador B: ";
			cin>>jogadasB[ind];
			total=jogadasA[ind]+jogadasB[ind];
			if (total%2==0){ 
				cout<<"Jogador A venceu!\n";
				winA++;
			}
				else {
					cout<<"Jogador B venceu!\n";
					winB++;			}
			total=0;		
		}
		cout<<"O jogador A ganhou "<<winA<<" vezes.\n";
		cout<<"O jogador B ganhou "<<winB<<" vezes.\n";
}




