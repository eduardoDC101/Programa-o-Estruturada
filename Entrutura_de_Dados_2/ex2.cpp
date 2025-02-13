#include <iostream>
using namespace std;

void receber(char *caracteres);
void exibir(char *caracteres);

int main(){

    char caracteres[6];

    cout<<"Digite 6 caracteres: \n";
    receber(caracteres);

    cout<<"\n\nExibindo os caracteres: \n";
    exibir(caracteres);

    cout<<"\n\nInvertendo o primeiro com o segundo: \n";

    return 0;
}

void receber(char *caracteres){
    for(int i=0; i<6;i++){
        cout<<"Caractere " << i+1 <<": ";
        cin>>caracteres[i];
    }
}

void exibir(char *caracteres){
    for(int i=0; i<6;i++){
        cout<<caracteres[i]<< " ";
    }
}

void mudar(char *caracteres){
    char temp1 = caracteres[0];
    char temp2 = caracteres[1];
    caracteres[0] = temp2;
    caracteres[1] = temp1;

    for(int i=0; i<6;i++){
        cout<<caracteres[i]<< " ";
    }
}