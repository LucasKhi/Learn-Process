
#include <iostream>

using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
//caracter vogais[5] // Criação do vetor vogais, para 5 caracteres
//inteiro num[10] // Criação do vetor num, para 10 números inteiros
//real notas[35] // Criação do vetor notas, para 35 números reais
//char vogais[5]; // Criação do vetor vogais, para 5 caracteres
int num[10]; // Criação do vetor num, para 10 números inteiros
float notas[35]; // Criação do vetor notas, para 35 números reais
//Armazena a letra “E” na segunda posição do vetor vogais
vogais[1] = 'E'
//Armazena o número 35 na quinta posição do vetor num
num[6] = 35;
//Armazena o número 8.5 na vigésima posição do vetor notas
notas[19] = 8.5;
//Exibe a primeira posição do vetor vogais
cout <<vogais[0];
//Armazena em RESULT a soma dos dois primeiros valores do vetor num
RESULT = num[0]+num[1];
//Armazena o valor informado via teclado na quarta posição do vetor notas
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
Clique nos botões para ver as informações.

#include
using namespace std;
int main()
{
int indice, numeros[15];
for (indice=0;indice<=14;indice++)
{
cout <<"Informe o "<<indice+1<<"o. número: ";
cin >numeros[indice];
}
for (indice=14;indice>=0;indice--)
{
cout <<indice+1<<"o. número: "<<numeros[indice]<<"\n";
}
}*/

