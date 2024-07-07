#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv)
{
   char nome[50];
   int nasc,i,idade,idadet;
   idadet = 0;
   for (i = 1; i <= 5; i++)
   {
    cout << "Informe o nome: " << endl;
    cin >> nome;
    cout << "Infomre o ano de nascimento: " << endl;
    cin >> nasc;
    idade = 2024 - nasc;
    cout << "Essa pessoa tem " << idade << " anos" << endl;
    cout << "-------------------------" << endl;
    idadet = idadet + idade;
   }
    cout << "A soma das 5 idades e igual a: " << idadet;
}











