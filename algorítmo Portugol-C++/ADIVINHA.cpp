#include <iostream>
using namespace std;

	int main(){
		setlocale(LC_ALL, "ptb");
		int num[10];
		int ind,numDois,tente=0;
		bool acertou=false;
			for (ind=0;ind<=9;ind++){
			    cout<< "Informe o "<<ind+1<<"o. número: ";
			        cin>>num[ind];
	        }
	            do{
	                cout<<"Qual número você acha que foi escrito? ";
	                    cin>>numDois;
	                    tente=1;
	                    ind=0;
	                    while(!acertou && ind<=9){
	                        if(num[ind]==numDois){
	                            acertou=true;
	                        }
	                    ind++;
	                    }
	                    if (!acertou){
	                        tente++;
	                        cout<<"Errado!\n";
	                        cout<<"Qual número você acha que foi escrito? ";
	                        cin>>numDois;
	                        ind=0;
	                    }
	            }while(!acertou && tente<=3);
				                    
	        if(acertou){
	            cout<<"Parabéns! Este número está na posição "<<ind<<" do vetor! Você usou "<<tente<<" tentativas...";
	        }
	            else{
	                cout<<"Que pena! Você não acertou...";
	            }			
	}


