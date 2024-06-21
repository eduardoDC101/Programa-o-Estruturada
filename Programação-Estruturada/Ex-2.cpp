#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n1,n2,n3;

    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;
    cout << "Digite o terceiro numero: " << endl;
    cin >> n3;

     if(n1 > n2 && n3)
     {
        cout << "O maior numero e " << n1;
     }
     if(n2 > n1 && n2 > n3)
     {
        cout << "O maior numero e " << n2;
     }
     if(n3 > n1 && n3 > n2)
     {
        cout << "O maior numero e " << n3;
     }

 return 0;
}


