#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main(){
    float n1,n2,total;
    int desejo;
   

    cout << "Digite - 1 - para somar dois numeros" << endl;
    cout << "Digite - 2 - para subtrair dois numeros" << endl;
    cout << "Digite - 3 - para dividir dois numeros" << endl;
    cout << "Digite - 4 - para multiplicar dois numeros" << endl;
    cin >> desejo;

    cout << "Informe o primeiro numero" << endl;
    cin >> n1;
    cout << "Informe o segundo numero " << endl;
    cin >> n2;

    switch (desejo)
    {
    case 1:
        total = n1 + n2;
        cout << "O resultado da soma entre o primeiro e o segundo numero e " << total;
        break;
    case 2:
        total = n1 - n2;
        cout << "O resultado da subtracao entre o primeiro e o segundo numero e " << total;
        break;
    case 3:
        total = n1 / n2;
        cout << "O resultado da divisao entre o primeiro e o segundo numero e " << total;
        break;
    case 4:
        total = n1 * n2;
        cout << "O resultado da multiplicacao entre o primeiro e o segundo numero e " << total;
        break;
        default:
         cout << "Opcao invalida";

    }

  return 0;



}