#include <iostream>
using namespace std;
int main()
{
 setlocale(LC_ALL, "ptb");
 int ind, i, numAluno, acertos=0;
 char gab[15],resp[15];
	 cout <<"Gabarito das quest�es:\n";
	 
	 for (ind=0;ind<=14;ind++){
		 cout <<"Quest�o "<<ind+1<<": ";
		 cin >>gab[ind];
	 }
	 cout <<"\n\nQuantos alunos tem a turma? ";
	 cin >>numAluno;
	 for (ind=1;ind<=numAluno;ind++){
		 cout <<"Respostas do "<<ind<<"� aluno.\n";
		 for (i=0;i<=14;i++){
			 cout <<"Digite a resposta da quest�o "<<i+1<<": ";
			 cin >>resp[i];
			 resp[i]==gab[i] ? (acertos++); 
		 }
		 }
			 cout <<numAluno<< "�. aluno acertou. "<<acertos<<" quest�es\n\n";
			 acertos=0;
	 }
}
