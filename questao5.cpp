//5) Escreva um programa que inverta os caracteres de um string.

//IMPORTANTE:
//a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
//b) Evite usar funções prontas, como, por exemplo, reverse;




#include <iostream> // Biblioteca para entrada e saída de dados
#include <string> // Biblioteca para representação de strings

using namespace std;

int main()
{
    string str, reversed_str = ""; // Declaração das variáveis: str é a string a ser invertida e reversed_str é a string invertida (inicialmente vazia)
    cout << "Digite uma string: "; // Pede ao usuário que digite a string a ser invertida
    cin >> str; // Lê a string digitada pelo usuário e armazena na variável str
    for(int i = str.length() - 1; i >= 0; i--) // Laço de repetição para percorrer a string de trás para frente
    {
        reversed_str += str[i]; // Adiciona o caractere atual na string invertida
    }
    cout << "A string invertida eh: " << reversed_str << endl; // Imprime a string invertida
    return 0;
}
