/*
---------------------------------------
# ✅ xc+029
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+029]
AS
/*
#include <stdio.h>
#include<stdlib.h>

void select(int Vet[], int n){

int Menor;
int   aux; //variavel global

for(int i=0;i<n-1;i++){
    Menor=i;

    for(int j=i+1; j< n; j++) {
         if(Vet[Menor] > Vet[j])
                Menor=j;
    }
    if (i!= Menor) {
        aux=Vet[i];
        Vet[i]=Vet[Menor];
        Vet[Menor]=aux;
    }
}
}

int main() {

   int n=13;
   int Vetor[13] = {3,6,5,1,2,8,7,9,4,10,13,12,11};

   select(Vetor,n);
   printf("\n\n ");

   for(int i=0;i<n;i++){
    printf("%d - ",Vetor[i]);
   }
   printf("\n\n\n");

system("pause");
return 0;

}


*/