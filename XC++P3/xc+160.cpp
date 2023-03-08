
/*
---------------------------------------
# ✅ xc+160 C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+160]
AS
/*
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    cout << "Biblioteca C++ 97 algorithm" << endl;

    vector<int>vt1={1,4,7,2,5,8,3,6,9,0};
    vector<int>vt2={1,4,7,2,5,8,3,6,9,0};
    vector<int>vt3={0,1,2,3,4,5,6,7,8,9,};
    vector<int>vt4={2,5,8};
    vector<int>vt5={10,11,12};
    vector<int>::iterator it;

    cout << "Equal" << endl;
    if(equal(vt1.begin(), vt1.end(), vt2.begin())){
        cout << "colecoes iguais"  << endl;
    }
    cout << "\n";

    cout << "Search" << endl;
    it=search(vt1.begin(),vt1.end(), vt4.begin(), vt4.end());
    if(it!=vt1.end()){
        cout << "colecao encontrada posicao " << it-vt1.begin() << endl;
    }
    cout << "\n";

    cout << "Copy" << endl;
    copy(vt5.begin(), vt5.end(), vt3.begin());
    for(auto x:vt3){
        cout << x << " ";
    }
    cout << "\n";
    cout << "Copy_if" << endl;
    copy_if(vt5.begin(), vt5.end(),vt1.begin(),[](int i){return (i%2)==0;});
    for(auto x:vt1){
        cout << x << " ";
    }
    cout << "\n";
    cout << "Move" << endl;
    vt4=move(vt1);
    for(auto x:vt4){
        cout << x << " ";
    }
    cout << "\n";
    for(auto x:vt1){
        cout << x << " ";
    }
 //   swap(vt2,vt3);
    cout << "\n";
    cout << "Transform" << endl;
    transform(vt5.begin(),vt5.end(),vt5.begin(),[](int i){return i*100;});
    for(auto x:vt5){
        cout << x << " ";
    }
/*    cout << "\n";
    cout << "Replace" << endl;
    replace(vt2.begin(), vt2.end(),5,500);
    for(auto x:vt2){
        cout << x << " ";
    }

*/


   return 0;
}


*/