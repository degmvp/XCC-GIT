
/*
---------------------------------------
# ✅ xc+122 - C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+122]
AS
/*

#include <iostream>
#include <map>

using namespace std;

int main()
{
    cout << "Map Container de associacao Chave!\n" << endl;

    map<int,string>prod;
    map<int,string>::iterator itmap;

    prod[0]="Mouse";
    prod[1]="Teclado";
    prod[2]="Monitor";
    prod[3]="cx.som";

    prod.insert(pair<int,string>(7,"SSD 240GB"));
    prod.insert(pair<int,string>(8,"SSD 500GB"));

    //prod.erase(3);
    //prod.clear();
    //prod.erase(prod.begin(),prod.find(3));
    prod.erase(prod.find(0),prod.find(3));

    for(auto it:prod)
    {
        cout << it.first  << " chave do produto.." << it.second << "    elemnto do map ..."<< endl;
    }
    itmap=prod.find(8);
    if(itmap==prod.end()){
        cout << "produto não encontrado" << endl;
    }else{
         cout << "Produto em estoque" << endl;
         cout << "codigo: " << itmap->first << " - Produto: " << itmap->second << endl;
    }
    return 0;
}

*/