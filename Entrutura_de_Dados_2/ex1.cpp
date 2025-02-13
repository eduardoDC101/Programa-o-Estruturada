#include <iostream>
using namespace std;

void preencher(int *numeros);
void exibir(int *numeros);
void inversa(int *numeros);
//void verifica(int *numeros);
void bubbleSort(int *numeros);

int main(){
    int numeros[10];

    cout<< "Digite 10 numeros positivos: \n";

    preencher(numeros);

    cout<<"Numeros na ordem de insercao: \n";
    exibir(numeros);

    cout<<"\nNumeros na ordem inversa: \n";
    inversa(numeros);

    //cout<<"\nVetor apos verificacao: \n";
    //verifica(numeros);

    cout<<"\nBubble Sort: ";
    bubbleSort(numeros);

    return 0;
}

void preencher(int *numeros){
    for(int i = 0; i<5 ; i++){
        cout<<"Numero " << i+1 <<": ";
        cin>> numeros[i];
    }
}

void exibir(int *numeros){
    for(int i=0; i<5; i++){
        cout<<numeros[i] << " ";
    }
}

void inversa(int *numeros){
    for(int i=4; i>= 0; i--){
        cout<<numeros[i] <<" ";
    }
}

/*void verifica(int *numeros){


    int n1,n2,n3;
    n1 = numeros[0];
    n2 = numeros[1];
    

    if(n1 > n2){
        numeros[1] = n1;
        numeros[0] = n2;
        n2 = numeros[1];
        n3 = numeros[2];
    }
   
    if(n2>n3){
        numeros[2] = n2;
        numeros[1] = n3;
    }

    for(int i=0; i<10; i++){
        cout<<numeros[i] << " ";
    }
}*/

void bubbleSort(int *numeros){
    for(int i = 0; i < 5 - 1; i++){ // Número de passagens
        for(int j = 0; j < 5 - 1 - i; j++){ // Comparações em cada passagem
            if(numeros[j] > numeros[j+1]){
                // Troca os elementos
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    // Exibe o vetor ordenado
    for(int i=0; i<5; i++){
        cout<<numeros[i] << " ";
    }
    cout << endl;
}