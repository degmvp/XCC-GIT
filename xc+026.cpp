/*
---------------------------------------
# ✅ xc+026
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+026]
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




 void cadastra(char nome[30], int celular) {
     FILE *arq;
     arq = abrir('a', "agenda.txt");
     fprintf(arq, "%s %d\n", nome, celular);
     fechar(arq);
 }


 void listar() {
     FILE *arq;
     char nome[30];
     int celular;

     arq = abrir('l', "agenda.txt");
     while(!feof(arq)) {
            fscanf(arq, "%s %d ", &nome, &celular);
            printf("nome: %s  -  Celular: %d\n", nome, celular);

     }
     fechar(arq);
 }


int main(){
     char nome[30];
     int celular;
int opcao;
do {
printf("\n\n\t\t\tAgenda simples\n");
printf("\nMenu");
printf("\n 1 - Cadastrar Nome e Celular");
printf("\n 2 - Listar Tudo");
printf("\n 3 - sair");

printf("\ndigite uma opcao: ");

scanf("%d", &opcao);
system("cls");
switch(opcao) {

       case 1:
              printf("\ndigite o nome:  ");
              setbuf(stdin,NULL);
              gets(nome);
              printf("\ndigite o celular: ");
              scanf("%d", &celular);
              cadastra(nome, celular);
              break;
       case 2:
              listar();
              break;
       case 3:
               printf("\n\nfinalizando...\n\n");
               system("pause");
               exit(0);

       default:
               printf("opcao invalida! digite novamente\n\n");
               system("pause");

}
}while(opcao!=3);
 return 0;
}


*/