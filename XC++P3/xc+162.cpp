
/*
---------------------------------------
# ✅ xc+162 C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+162]
AS
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Biblioteca C++ 98 algorithm" << endl;
    cout << "\n\n";
    cout << "set_union" << endl;
    vector<int>vt8{0,1,2,3,4};
    vector<int>vt9{5,6,7,8,9};
    vector<int>vt11{0,0,0,0,0,0,0,0,0,0};
    set_union(vt8.begin(),vt8.end(),vt9.begin(),vt9.end(),vt11.begin());
    for(auto x:vt8){
        cout << x << " ";
    }
    cout << "\n\n";
    for(auto x:vt9){
        cout << x << " ";
    }
    cout << "\n\n";
    cout << "set_union" << endl;
   for(auto x:vt11){
        cout << x << " ";
    }
   cout << "\n\n";
   swap(vt8,vt9);
   merge(vt8.begin(),vt8.end(),vt9.begin(),vt9.end(),vt11.begin());
   cout << "\n\n";
   cout << "merge" << endl;
   for(auto x:vt11){
        cout << x << "*";
    }
   cout << "\n\n";
   cout << "set_intersection" << endl;
   vector<int>vt14{0,1,2,3,4};
   vector<int>vt15{2,3,4,5,6};
   vector<int>vt16{0,0,0};
   set_intersection(vt14.begin(),vt14.end(),vt15.begin(),vt15.end(),vt16.begin());
   for(auto x:vt16){
        cout << x << " ";
    }
   cout << "\n\n";
   cout << "Min e max" << endl;
   int n1,n2;
   n1=10;
   n2=5;
   cout << "menor: " << min(n1,n2) << endl;
   cout << "maior: " << max(n1,n2) << endl;

   cout << "\n\n";
   cout << "minmax" << endl;
   int n3,n4,n5,n6,n7,n8;
   n3=10;n4=5;n5=10;n6=3;n7=8;n8=9;
   auto res=minmax({n3,n4,n5,n6,n7,n8});
   cout << "menor: " << res.first << " maior: " << res.second;
   cout << "\n\n";

   cout << "min_element,  max_element, minmax_element" << endl;
   vector<int>vt20{5,4,10,30,12,15,8,7};
   vector<int>::iterator it1,it2;
   it1=min_element(vt20.begin(), vt20.end());
   it2=max_element(vt20.begin(), vt20.end());

   auto res2=minmax_element(vt20.begin(), vt20.end());
   cout << "Menor: " << *it1 << " Maior: " << *it2 << endl;
   cout << "Menor: " << *res2.first << " Maior: " << *res2.second << endl;


    return 0;
}

*/