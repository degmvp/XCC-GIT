/*
---------------------------------------
# ✅ xc+172  - C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+172]
AS
/*
#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

int main()
{
    fstream arquivo;
    char opc='s';
    string nome,linha;

    arquivo.open("arq.txt",ios::app);

    while((opc=='s') or (opc=='S')){
        cout << "digite um nome: ";
        cin >> nome;
        arquivo << nome << "\n";
        cout << "\ndigitar outro?[s/n]\n";
        cin >> opc;
        system("CLS");
    }
    arquivo.close();

    arquivo.open("arq.txt",ios::in);
    cout << "Listando os nomes digitados!" << endl;

    if(arquivo.is_open()){
        while(getline(arquivo,linha)){
            cout << linha << endl;
        }
    }else{
            cout << "Arquivo inexistente!" << endl;
         }


    system("pause");
    return 0;
}

*/