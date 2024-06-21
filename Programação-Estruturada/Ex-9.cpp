#include <iostream>

using namespace std;

int main()
{
  int qnt;

    cout << "Informe a quantidade de clientes: ";
    cin >> qnt;

    struct nutri
    {

       char nome[60];
       int idade,cep;
       float altura,peso;
       char sexo[15];
    }strNutri[qnt];

    int i;
    for(i=0; i<qnt; i++)
    {
        fflush(stdin);
        cout << "Informe o nome do cliente: ";
        cin.getline(strNutri[i].nome, 60);
        fflush(stdin);
        cout << "Informe a idade do cliente: ";
        cin >> strNutri[i].idade;
        fflush(stdin);
        cout << "Informe o cep do cliente: " ;
        cin >> strNutri[i].cep;
        fflush(stdin);
        cout << "Informe a altura do cleinte: ";
        cin >> strNutri[i].altura;
        fflush(stdin);
        cout << "Informe o peso do cliente: ";
        cin >> strNutri[i].peso;
        fflush(stdin);
        cout << "Informe o sexo do cliente: ";
        cin.getline(strNutri[i].sexo, 15);
        cout << endl;
        fflush(stdin);
    }

    cout << "\nClientes cadastrados com sucesso!!" << endl;
    for(i=0; i<qnt; i++)
    {
        cout << "Cliente: " << strNutri[i].nome << endl;
        cout << "Idade: " << strNutri[i].idade << endl;
        cout << "Cep: " << strNutri[i].cep << endl;
        cout << "Altura: " << strNutri[i].altura << endl;
        cout << "Peso: " << strNutri[i].peso << endl;
        cout << "Sexo: " << strNutri[i].sexo << endl;
        cout << "------------------------" << endl;
    }



    return 0;
}