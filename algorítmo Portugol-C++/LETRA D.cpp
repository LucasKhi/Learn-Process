#include <iostream>
using namespace std;
int main()
{
	 setlocale(LC_ALL, "ptb");
	 int ind;
	 char vet1[20],vet2[20];
	 cout<<"Vetor 1 \n";		 
	 for (ind=0;ind<=19;ind++){
	 	 cout<<ind+1<<"º. elemento: ";
		 cin>>vet1[ind];
		 vet2[19-ind]=vet1[ind];
	 }
	 cout<<"Vetor 2 \n";
	 for (ind=0;ind<=19;ind++){
		 cout<<"O "<<ind+1<<"o. elemento é: "<< vet2[ind]<< "\n";
	 }

}


