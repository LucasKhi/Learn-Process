#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int numeros[10],ind,tentativa,cont,tentativas=3,acerto=0;
for(ind=0;ind<=9;ind++)
{
cout<<"Player 1 informe o "<<ind+1<<" o. numero : ";
cin>>numeros[ind];
}
cout<<"Player 2 voce tem 3 tentativas para acertar os numeros propostos do Player 1";
for(cont=0;cont<=3;cont++)
{
cout<<"Qual o "<<cont<<" .o numero ?\n";
cin>>tentativa;
tentativas-=1;
if(tentativa==numeros[ind])
{
cout<<"Parabéns! Este número está na posição "<<numeros[ind]<<" do vetor!\nAinda restam : "<<tentativas;
acerto++;
}
else if(tentativa!=numeros[ind])
{
cout<<"Voce errou o numero do vetor. Ainda restam : "<<tentativas;
acerto=acerto;
}
else(tentativas==0)
{
cout<<"Acabaram suas tentativas voce acertou : "<<acerto<<" numeros!";
if(acerto==1)
{
cout<<"Parabens! Player 2 teve um aproveitamento de 1/3 das Tentativas";
}
else if(acerto==2)
{
cout<<"Excelente! Player 2 teve um aproveitamento de 2/3 das Tentativas";
}
else(acerto==3)
{
cout<<"Perfeito! Player 2 teve um aproveitamento de 3/3 das Tentativas";
}
}
}
}
