#include <iostream>
#include <locale>
#include <fstream>
using namespace std;
struct SistemaCadastro
{
    string nomepet;
    string especiepet;
    string racapet;
    char sexo;
    int idadepet;
    string nomedono;
    long int rg;
    long long int telefone;
};
int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    int numerofichas;
    cout<<"Digite quantas fichas iram ser feitas: ";
    cin>>numerofichas;
   SistemaCadastro Fichas[numerofichas];
   for(int i = 0;i<numerofichas;i++)
   {
    cout<<"INFORME O NOME DO PET: ";
    cin>>Fichas[i].nomepet;
    cout<<"INFORME A ESPÉCIE DO PET: ";
    cin>>Fichas[i].especiepet;
    cout<<"INFORME A RAÇA DO PET: ";
    cin>>Fichas[i].racapet;
    cout<<"INFORME O SEXO DO PET: ";
    cin>>Fichas[i].sexo;
    cout<<"INFORME A IDADE DO PET: ";
    cin>>Fichas[i].idadepet;
    cout<<"INFORME O NOME DO DONO DO PET: ";
    cin>>Fichas[i].nomedono;
    cout<<"INFORME O RG DO DONO DO PET: ";
    cin>>Fichas[i].rg;
    cout<<"INFORME O TELEFONE DO DONO DO PET: ";
    cin>>Fichas[i].telefone;
   }
   cout<<"\n\nClientes Cadastrados como sucesso!!!\n\n";
   ofstream Arquivo;
   for(int i = 0;i<numerofichas;i++)
   {
    Arquivo.open("Registros.txt",ios::app);
    {
        Arquivo<<"NOME DO PET: "<<Fichas[i].nomepet<<endl;
        Arquivo<<"ESPÉCIE DO PET: "<<Fichas[i].especiepet<<endl;
        Arquivo<<"RAÇA DO PET: "<<Fichas[i].racapet<<endl;
        Arquivo<<"SEXO DO PET: "<<Fichas[i].sexo<<endl;
        Arquivo<<"IDADE DO PET: "<<Fichas[i].idadepet<<endl;
        Arquivo<<"NOME DO DONO DO PET: "<<Fichas[i].nomedono<<endl;
        Arquivo<<"RG DO DONO DO PET: "<<Fichas[i].rg<<endl;
        Arquivo<<"TELEFONE DO DONO DO PET: "<<Fichas[i].telefone<<endl;
        Arquivo<<"\n\n\n";
    }
    Arquivo.close();
   }
    system("PAUSE");
    return 0;
}
