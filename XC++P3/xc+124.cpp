/*
---------------------------------------
# ✅ xc+124- C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+124]
AS
/*
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    cout << "Pair dados em pares!" << endl;

    const int tam=3;

    pair<int,string> par[tam];
//  pair<int,string> par(11,"Law");
/*   par[0].first=100;
    par[0].second="C++11";

    par[1].first=200;
    par[1].second="C++12";

    par[2].first=300;
    par[2].second="C++13";
*/
    cout << "Usando make_pair em pares!\n" << endl;
    par[0]=make_pair(100,"C++11");
    par[1]=make_pair(200,"C++12");
    par[2]=make_pair(300,"C++13");

    for(int i=0; i< tam;i++)
    {
      cout << par[i].first << " - " << par[i].second << endl;
    }

    pair<int,pair<string,double>> par1[tam];
    cout << "Usando Pair dentro do Pair make_pair em pares!\n" << endl;

    par1[0]=make_pair(10,make_pair("mouse",10.55));
    par1[1]=make_pair(10,make_pair("teclado",50.49));
    par1[2]=make_pair(10,make_pair("monitor",399.98));
      for(int i=0; i< tam;i++)
    {
      cout << par1[i].first << " - " << par1[i].second.first << " - " << par1[i].second.second << endl;
    }
    return 0;
}

*/