
/*
---------------------------------------
# ✅ xc+197 C++ Lib 11
# ✅ C++ criado: 2021/04/14
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+197]
AS
/*
// Utilizando o tratamento de sinal
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <csignal>
using std::raise;
using std::signal;

#include <cstdlib>
using std::exit;
using std::rand;
using std::srand;

#include <ctime>
using std::time;

void signalHandler( int );

int main()
{
   signal( SIGINT, signalHandler );
   srand( time( 0 ) );

   // cria e gera saída de números aleatórios
   for ( int i = 1; i <= 100; i++ )
   {
      int x = 1 + rand() % 50;

      if ( x == 25 )
         raise( SIGINT ); // levanta SIGINT quando x é 25

      cout << setw( 4 ) << i;

      if ( i % 10 == 0 )
         cout << endl; // gera saída de endl quando i é um múltiplo de 10
   } // fim do for

   return 0;
} // fim de main

// trata o sinal
void signalHandler( int signalValue )
{
   cout << "\nInterrupt signal (" << signalValue
        << ") received.\n"
        << "Do you wish to continue (1 = yes or 2 = no)? ";

   int response;

   cin >> response;

   // verifica respostas inválidas
   while ( response != 1 && response != 2 )
   {
      cout << "(1 = yes or 2 = no)? ";
      cin >> response;
   }  // fim do while

   // determina se é hora de sair
   if ( response != 1 )
      exit( EXIT_SUCCESS );

   // chama signal e lhe passa SIGINT e o endereço de signalHandler
   signal( SIGINT, signalHandler );
}  // fim da função signalHandler

*/