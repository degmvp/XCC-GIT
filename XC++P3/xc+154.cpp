
/*
---------------------------------------
# ✅ xc+154 C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+154]
AS
/*
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,string>mp;
    map<int,string>::iterator it;
    mp[0]="Branco";
    mp[1]="Preto";
    mp[2]="Vermelho";
    mp[3]="Verde";
    mp[4]="Azul";
    for(auto x:mp){
    cout << x.first << " - " << x.second << endl;
}
    cout << endl;
    for(it=mp.begin(); it!=mp.end();++it){
     cout << it->first << " - " << it->second << endl;
    }
     cout << mp.size() << " tamanho do map " << endl;
     cout << mp.max_size() << " tamanho maximo map " << endl;

    map<char,int>mp2;

    mp2['a']=10;
    mp2['b']=20;
    mp2['c']=30;
    mp2['d']=40;
    mp2['e']=50;

   cout << mp2.at('a') << " usando mp2.at( ) " << mp2.at('b') << endl;
   cout << mp2['a'] << " usando mp2( ) " << mp2['b']  << endl;

    map<int,string>mp4;
    map<int,string>mp5;

    mp4.insert(pair<int,string>(10,"laranja"));
    mp4.insert(pair<int,string>(20,"Abacaxi"));
    mp4.insert(pair<int,string>(30,"Uva"));
    mp4.insert(pair<int,string>(40,"Morango"));
    mp4.insert(pair<int,string>(50,"Banana"));

    it=mp4.find(30);
    mp4.erase(it);

    for(auto x:mp4){
        cout << x.first << " - "  << x.second << endl;
    }
    cout << endl << endl;
    mp4.swap(mp5);
    mp5.emplace_hint(mp5.end(),60,"Manga");
    for(auto x:mp5)
{
    cout << x.first << " - " << x.second << endl;
}
    if(mp4.empty()){
        cout << "    map4 erase - vazio" << endl;
    }
    if(mp5.empty()){
        cout << "    map5 erase - vazio" << endl;
    }
    map<int,char>mp6;
    map<int,char>::iterator it2;

    mp6[0]='a';
    mp6[1]='b';
    mp6[2]='c';
    mp6[3]='d';
    mp6[4]='e';

    it2=mp6.find(2);
    cout << it2->first << " it2->first "  << " it2->second " << it2->second << endl;
    if(mp6.count(3)!=0){
        cout << "A chave 3 esta no map" << endl;
    }
    it2=mp6.lower_bound(3);
    mp6.erase(it2);
    for(auto x:mp6){
         cout << x.first << " x.first "  << " x.second " << x.second << endl;
    }


    return 0;
}


*/