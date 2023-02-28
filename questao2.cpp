//2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores 
//anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde,
//informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

//IMPORTANTE:
//Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;




#include <iostream>
using namespace std;

int main() {
   int num, anterior = 0, atual = 1, proximo;

   cout << "Digite um número: ";
   cin >> num;

   while (proximo < num) {
      proximo = anterior + atual;
      anterior = atual;
      atual = proximo;
   }

   if (proximo == num) {
      cout << num << " pertence à sequência de Fibonacci" << endl;
   } else {
      cout << num << " não pertence à sequência de Fibonacci" << endl;
   }

   return 0;
}
