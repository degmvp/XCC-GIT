/*
---------------------------------------
# ✅ xc+025
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+025]
AS
/*
#include <stdio.h>
#include <stdlib.h>


      FILE* abrir(char modo, char via[40]) {
      FILE *arq;
      switch(modo) {
            case 'g':
                     arq = fopen(via,"wt");
                     break;
            case 'l':
                     arq = fopen(via,"rt");
                     break;
             case 'a':
                     arq = fopen(via,"a");
                     break;
      }
      if(arq==NULL) {
             printf("Problema na abertura");
             exit(0);
}

      return arq;
}
    void fechar(FILE *arq){
     fclose(arq);
}
int main(){

char vetor[20];
int valor;
FILE *arq;

arq = abrir('g',"teste.txt");

fprintf(arq,"Degmar 1945");

fechar(arq);

arq = abrir('l',"teste.txt");

fscanf(arq,"%s %d", &vetor, &valor);
printf("\n\n%s %d\n\n", vetor, valor);

fechar(arq);

    system("pause");
    return 0;
}


*/