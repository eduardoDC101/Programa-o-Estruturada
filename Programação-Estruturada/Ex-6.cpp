#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv)
{
   int i,soma,par;
   soma = 0;
   for (i = 100; i <= 200; i+= 2)
   {
    cout << i << endl;
    soma = soma + i;
   }
    cout << "A soma de todos os numeros pares entre 100 e 200 e: " << soma << endl;
   return 0;
}   
