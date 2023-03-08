/*
---------------------------------------
# ✅ xc+158 C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+158]
AS
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool menor50(int i){
    return i<50;
}

int main()
{
    vector<int>vt={2,4,12,7,-8,7,12,1,3,5,6,9,11,13,2,7,9};
    for( auto x:vt){
        cout << x << " ";
    }
    cout << "\n\n";

    if(all_of(vt.begin(),vt.end(),menor50)){
        cout << "todos < 50" << endl << endl;
    }else{
        cout << "existe > 50"   << endl << endl;
    }

    if(any_of(vt.begin(),vt.end(),[](int i){return i>12;})){
        cout << "Existe > 12" << endl << endl;
    }

    if(none_of(vt.begin(),vt.end(),[](int i){return i<0;})){
        cout <<  "Todos sao positivos" << endl << endl;
    }else{
        cout << "Existe < 0 negativo" << endl << endl;
    }

    cout << "Dobro"  << endl;
    for_each(vt.begin(),vt.end(),[](int i){cout << i*2 << " ";});
    cout << "\n\n";

    auto it=find(vt.begin(),vt.end(),12);
    cout << *it << endl << endl;

    cout << "find_if com lambda" << endl;
    auto it2=find_if(vt.begin(),vt.end(),[](int i){return((i%2)==1);});
    cout << "primeiro elemento impar: " << *it2 << endl << endl;

    cout << "find_if_not com lambda" << endl;
    auto it3=find_if_not(vt.begin(),vt.end(),[](int i){return((i%2)==1);});
    cout << "primeiro elemento par: " << *it3 << endl << endl;
    cout << "count e count_if" << endl;
    cout << "Quantidade ocorrencias do numero: " << count(vt.begin(),vt.end(),7) << endl << endl;
    cout << "Qnt. impares: " << count_if(vt.begin(),vt.end(),[](int i){return ((i%2)==1);}) << endl;

    return 0;
}

*/