#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{
    char nome[50];
    int salario;
    float imposto;
    

    cout << "\n*** ESSE PROGRAMA CALCULA O VALOR QUE UMA PESSOA DEVE PAGAR DE IMPOSTO***\n";
    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Informe seu salario: " << endl;
    cin >> salario;

   if (salario < 2000)
   {
     cout << "Ola " << nome << ", voce tem isencao de pagamento do IRPF";
   }
   if (salario >= 2000 && salario < 3000)
   {
      imposto = salario * 0.15;
      cout << "Ola " << nome << ", voce devera pagar " << imposto << " de IRPF";
   }
   if (salario >= 3000 && salario < 5000)
   {
     imposto = salario * 0.20;
     cout << "Ola " << nome << ", voce devera pagar " << imposto << " de IRPF";
   }
   if(salario >= 5000 && salario < 10000)
   {
      imposto = salario * 0.23;
      cout << "Ola " << nome << ", voce devera pagar " << imposto << " de IRPF";
   }
   if(salario > 10000)
   {
      imposto = salario * 0.27;
      cout << "Ola " << nome << ", voce devera pagar " << imposto << " de IRPF";
   }
   
   return 0;

}