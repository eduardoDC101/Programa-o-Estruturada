#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int time;
   cout << "Digite - 1 - para Sao Paulo" << endl;
   cout << "Digite - 2 - para Santos" << endl;
   cout << "Digite - 3 - para Palmeiras" << endl;
   cout << "Digite - 4 - para Corinthians" << endl;
   cin >> time;

    switch (time)
    {
    case 1:
        cout << "O time escolhido foi o Sao Paulo, o maior time do Brasil";
        break;
    case 2:
        cout << "O time escolhido foi o Santos, aquele que nem existe mais";
        break;
    case 3:
        cout << "O time escolhido foi o Palmeiras, aquele que nao tem mundial";
        break;
    case 4:
        cout << "O time escolhido foi o Corinthians, aquele que esta falido";
        break;
        default:
           cout << "Opcao invalida";
    }

 return 0;
}