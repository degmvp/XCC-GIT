/*
---------------------------------------
# ✅ xc+018
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+018]
AS
/*
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int quadrado(long int valor){ //tem retorno
    valor=valor*valor;
    return valor;
}

void quadradoimprime(long int valor){ //não tem retorno
    valor=valor*valor;
    printf("\n\nQuadrado Imprime: %ld\n\n", valor);

}

int main(){
    long int valor, resultado;

    printf("\nDigite um valor: ");
    scanf("%ld", &valor);

    resultado = quadrado(valor);
    printf("\n\nQuadrado: %ld\n\n", resultado);


    quadradoimprime(valor);

   printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s\n", "A string");

   printf("double with 2 decimals  %.2f\n\n", 3.1456789); //printf double with 2 decimals c
   printf("double with 4 decimals  %.4f\n\n", 3.1456789); //printf double with 4 decimals c
   printf("float with 6 decimals %.6f\n\n", 3123.456789);

   // NOTE: Specifically used for char data-types (not strings)

char str[]="Programming";    // Length = 11

std::cout << "[%s]       |";
printf("%s",str);      // Display Complete String
std::cout << "|\n";

std::cout << "[%10s]     |";
printf("%10s",str);    // 10 < Length: Display Complete String
std::cout << "|\n";

std::cout << "[%15s]     |";
printf("%15s",str);    // 15 > Length: Displays Complete String with 4 spaces Alignment:Right
std::cout << "|\n";

std::cout << "[%-15s]    |";
printf("%-15s",str);   // Same as Above But Left Aligned
std::cout << "|\n";

std::cout << "[%15.5s]   |";
printf("%15.5s",str);  // 15-5 = 10 spaces and show first 5 characters Align : R
std::cout << "|\n";

std::cout << "[%-15.5s]  |";
printf("%-15.5s",str); // 15-5 = 10 spaces and show first 5 characters Align : L
std::cout << "|\n";

    system("pause");

    return 0;
}

*/