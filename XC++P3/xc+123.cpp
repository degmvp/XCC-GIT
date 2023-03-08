
/*
---------------------------------------
# ✅ xc+123- C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+123]
AS
/*
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    cout << "SMART POINTER - unique_ptr shared_ptr" << endl;
    cout << "Pointer " << endl;
    int *pnum=new int();
    *pnum=100;
    cout << *pnum << " - " << pnum << endl;
    delete pnum;

    cout << "\nSMART POINTER - unique_ptr" << endl;
 /*
    unique_ptr<int>xnum(new int); // shared_ptr<int>xnum(new int);
    *xnum=1000;
    cout << *xnum << " - " << &xnum << endl;
    cout << "-----------------------------------------" << endl;
    string* str=new string("ponteiro padrao");
    cout << *str << " - tamanho: " << str->size() << endl;
    delete str;
*/
    unique_ptr<string>str(new string("smart pointer"));
    cout << *str << " - tamanho: " << str->size() << endl;
    return 0;
}

*/