/*
---------------------------------------
# ✅ xc+077
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+077]
AS
/*
#include <iostream>
using std::cout;
using std::endl;

#include <cstring> // contém protótipos para as funções strcmp e strlen
#include <cctype> // contém o protótipo para a função toupper

// retorna a maior entre duas strings no estilo C
const char *maximum( const char *first, const char *second )
{
   return ( strcmp( first, second ) >= 0 ? first : second );
} // fim da função maximum

int main()
{
   char s1[] = "xyz"; // array modificável de caracteres
   char s2[] = "ghi"; // array modificável de caracteres

   // const_cast requerido para permitir que const char * retornado por máximo
   // seja atribuído à variável char * maxPtr
   char *maxPtr = const_cast< char * >( maximum( s1, s2 ) );

   cout << "The larger string is: " << maxPtr << endl;

   for ( size_t i = 0; i < strlen( maxPtr ); i++ )
      maxPtr[ i ] = toupper( maxPtr[ i ] );

   cout << "The larger string capitalized is: " << maxPtr << endl;
   return 0;
}


*/