#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream arq1;
  arq1.open ("Nomes.txt", ios::app);
  if(arq1.is_open())
  {
      arq1 << "Ivan" << endl;
      arq1 << "Eduardo" << endl;
      arq1.close();
  }
  else
  {
      cout << "ERROR: file was not opened or does not exist" << endl;
  }
    return 0;
}