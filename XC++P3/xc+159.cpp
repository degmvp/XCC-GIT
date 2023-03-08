/*
---------------------------------------
# ✅ xc+159 C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+159]
AS
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    cout << "Biblioteca C++ 97iterator" << endl;

    vector<int>vt={5,10,7,3,8,9,4,2,1,0};
    vector<int>vt2={11,12,13};
    vector<int>::iterator it,it1,it2;

    for(it=vt.begin(); it!=vt.end(); it++){
        cout << *it << " ";
    }
    cout << "\n\n";
    it1=vt.begin();
    it2=vt.end()-1;

    cout << "Primeiro elemento: " << *it1 << endl;
    cout << "Ultimo   elemento: " << *it2 << endl;

    advance(it1,2);
    advance(it2,-1);
    cout << "Terceiro  elemento: "   << *it1 << endl;
    cout << "Penultimo elemento: "   << *it2 << endl;

    cout << *it1 << endl;
    cout << *it2 << endl;
    cout << "Valores entre it1 e it2: "   << distance(it1,it2)-1 << endl;
    cout << *it1 << " - Antes: "  << *prev(it1) << "  depois: " << *next(it1) << endl;

    copy(vt2.begin(),vt2.end(),back_inserter(vt));
    for(it=vt.begin(); it!=vt.end(); it++){
    cout << *it << " -";
    }



    return 0;
}


*/