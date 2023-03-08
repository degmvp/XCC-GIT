/*
---------------------------------------
# ✅ xc+146- C++ Lib 11
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+146]
AS
/*
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
   char * tx1;
   char tx2[60]="concatena ctxt2,Curso de C++ - www.youtube";
   char pesq='t';

   int tam;
   tam = strlen(tx2);

    cout << "tamanho da string tx2: " << tam << endl;

   tx1=(char*)memchr(tx2,pesq,strlen(tx2));

   if(tx1!=NULL){
        cout << "letra " << pesq << " posicao " << tx1-tx2+1 << endl;
    }else{
        cout << "Letra " << pesq << "inexistente" << endl;
    }

    char * c;
    char pes='c';
    c=strchr(tx2,pes);
    cout << "pos: " << c-tx2 << " letra " << pes << endl;
    c=strrchr(tx2,pes);
    cout << "Pos: " << c-tx2 << " letra " << pes << endl;

    int i;
    char chave[]="a";
    i=strcspn(tx2,chave);
    cout << "Pos: " << i <<  " letra " << tx2[i] << endl;

    char *p;
    p=strtok(tx2,",-");
    while(p!=NULL){
        cout << p << endl;
        p=strtok(NULL,",-");
    }

    return 0;
}