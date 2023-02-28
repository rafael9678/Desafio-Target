//2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores 
//anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde,
//informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

//IMPORTANTE:
//Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;



#include <iostream> // Biblioteca para entrada e saída de dados

using namespace std;

int main() {
   int num, anterior = 0, atual = 1, proximo; // Declaração das variáveis: num é o número digitado pelo usuário, anterior e atual são os dois primeiros números da sequência de Fibonacci e proximo é o próximo número a ser gerado na sequência

   cout << "Digite um número: "; // Pede ao usuário que digite o número a ser verificado
   cin >> num; // Lê o número digitado pelo usuário e armazena na variável num

   while (proximo < num) { // Laço de repetição para gerar a sequência de Fibonacci até que o próximo número seja maior ou igual ao número digitado pelo usuário
      proximo = anterior + atual; // Calcula o próximo número da sequência somando os dois números anteriores
      anterior = atual; // Atualiza o valor do número anterior para o valor atual
      atual = proximo; // Atualiza o valor do número atual para o valor do próximo número
   }

   if (proximo == num) { // Verifica se o número digitado pelo usuário pertence à sequência de Fibonacci
      cout << num << " pertence à sequência de Fibonacci" << endl; // Imprime mensagem informando que o número pertence à sequência de Fibonacci
   } else {
      cout << num << " não pertence à sequência de Fibonacci" << endl; // Imprime mensagem informando que o número não pertence à sequência de Fibonacci
   }

   return 0; // Indica que o programa foi executado com sucesso
}

