/*
---------------------------------------
# ✅ xc+065
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+065]
AS
/*
#include <stdio.h>
#include <stdlib.h>

int main(){


int valint; // int pra inteiros 4 bytes 1 bytes=8bits
                // %d ou %i em printf()

float valfloat; // float para reais decimais 8 bytes(32bits)
                       // %f em printf()

double valdouble; // float para reais decimais 16 bytes(64bits)
                         // %lf em printf() long float
char vchar1; // char 1 byte
char vchar2; // char 1 byte
                   // %c em printf()
vchar1 = 'a';
vchar2 = 'b';
valint = 11;
valfloat = 5.9;
valdouble = 8.2222222222222;

    printf("vchar1 : %c\n\n",vchar1);
    printf("vchar2 : %c\n\n",vchar2);
    printf("valor inteiro : %d\n\n",valint);
    printf("valor float   : %f\n\n",valfloat);
    printf("valor double  : %lf\n\n",valdouble);

    int A; // int %d ou %i para  valor inteiro
    printf("Digite um valor : ");
    scanf("%d", &A);
    printf("valor digitado: %d\n\n", A);


    int v1, v2, resu;

char oper;
printf("digite v1: ");
scanf("%d", &v1);
setbuf(stdin, NULL);

printf("digite a operacao ( + - * /): ");
scanf("%c", &oper);
setbuf(stdin, NULL);

printf("digite v2: ");
scanf("%d", &v2);
setbuf(stdin, NULL);

if ( oper == '+' ) {
     resu = v1 + v2;
}
else if (oper == '-' ) {
     resu = v1 - v2;
}
else if ( oper == '*' ) {
     resu = v1 * v2;
}
else if ( oper == '/' ) {
     resu = v1 / v2;
}
else{
     printf("operador invalido");
}

    printf("o resultado da operacao e: %d\n\n", resu);

    int x;
    printf("Comando de repeticao for  \n\n");
    for (x = 0; x < 10; x++) {
     printf("%d\n", x);
}

int v, soma=0;

do {
     printf("digite um valor ou -1 pra sair: ");
     scanf("%d", &v);
     soma = soma + v;
   }while (v!=-1);
     printf("soma : %d\n",soma);

    int y=0;

    while(y != -1) {
     printf("digite um valor ou -1 pra sair: ");
     scanf("%d", &y);
}
    system("pause");
    return 0;
}

*/