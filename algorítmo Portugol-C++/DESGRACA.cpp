
#include <iostream>

using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
//caracter vogais[5] // Cria��o do vetor vogais, para 5 caracteres
//inteiro num[10] // Cria��o do vetor num, para 10 n�meros inteiros
//real notas[35] // Cria��o do vetor notas, para 35 n�meros reais
//char vogais[5]; // Cria��o do vetor vogais, para 5 caracteres
int num[10]; // Cria��o do vetor num, para 10 n�meros inteiros
float notas[35]; // Cria��o do vetor notas, para 35 n�meros reais
//Armazena a letra �E� na segunda posi��o do vetor vogais
vogais[1] = 'E'
//Armazena o n�mero 35 na quinta posi��o do vetor num
num[6] = 35;
//Armazena o n�mero 8.5 na vig�sima posi��o do vetor notas
notas[19] = 8.5;
//Exibe a primeira posi��o do vetor vogais
cout <<vogais[0];
//Armazena em RESULT a soma dos dois primeiros valores do vetor num
RESULT = num[0]+num[1];
//Armazena o valor informado via teclado na quarta posi��o do vetor notas
cin >>notas[3];
A B C D E F G H I J K L M N O P Q R S T
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
T S R Q P O N M L K J I H G F E D C B A
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
}

/*programa
{
funcao inicio()
{
inteiro indice
cadeia nomes[45]
para (indice=0;indice<=44;indice++)
{
escreva("Informe o nome do ",indice+1,"o. aluno: ")
 leia(nomes[indice])
 }
 para (indice=0;indice<=44;indice++)
 {
 escreva(indice+1,"o. aluno: ",nomes[indice],"\n")
 }
 }
 }
Clique nos bot�es para ver as informa��es.

#include
using namespace std;
int main()
{
int indice, numeros[15];
for (indice=0;indice<=14;indice++)
{
cout <<"Informe o "<<indice+1<<"o. n�mero: ";
cin >numeros[indice];
}
for (indice=14;indice>=0;indice--)
{
cout <<indice+1<<"o. n�mero: "<<numeros[indice]<<"\n";
}
}*/

