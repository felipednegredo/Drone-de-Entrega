//ALUNOS:Felipe de Negredo,Igor Benedet e Marcos Kohler//
//CURSO: Ciência da Computação//
//DISCIPLINA: Algoritmos e Programação//
//PROFESSOR: Cristina Ono Horita//
#include <iostream>
using namespace std;

int main() {
int ac,lc,cc,aj,lj;
//SEPARAÇÃO DE CADA COMANDO//
do{
cout << "Insira as dimensoes da caixa:" <<endl;
cin >> ac >> lc >> cc;
//SE O VALOR FOR MENOR QUE 1 E MAIOR QUE 100//
if (ac < 1 || ac > 100 || lc < 1 || lc > 100 || cc < 1 || cc > 100)
  cout << "Digite outro valor" <<endl;
//ESTRUTURA DE REPETIÇÃO, CASO HAJA NUMEROS DIFERENTES//
}while (ac < 1 || ac > 100 || lc < 1 || lc > 100 || cc < 1 || cc > 100);
do{
cout << "Insira as dimensoes da janela:" << endl;
cin >> aj >> lj;
if (aj < 1 || aj > 100 || lj < 1 || lj > 100)
  cout << "Digite outro valor" <<endl;
}while (aj < 1 || aj > 100 || lj < 1 || lj > 100);
if (aj>=ac && lj>=lc){ 
//VAI COMPARAR OS VALORES DA CAIXA COM A JANELA//
  cout << "S" << endl;
}else
  cout << "N" << endl;
return 0;
}
