
/*
---------------------------------------
# ✅ xc+191 C++ Lib 11
# ✅ C++ criado: 2021/04/14
# ✅ Objetivo:sql server - C++ Lib 11
---------------------------------------*/

create proc [dbo].[xc+191]
AS
/*

#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "\nMANIPULANDO PLANILHAS" << endl;

    double plan [5][6] = {};
    cout << "\nGerando a Planilha\n" << endl;

    for(int x = 0;x < 5; x++){
        for(int y = 0;y < 5; y++){
            plan[x][y] = (double)rand() + (RAND_MAX /10000);
        }
    }

    cout << "\nCalculando os Valores\n" << endl;
    double total = 0;
    for(int x = 0;x < 5; x++){
        for(int y = 0;y < 5; y++){
            plan[x][5] += plan[x][y];
        }
        total += plan[x][5];
    }



    cout << "\nImprimindo a Planilha\n" << endl;
    for(int x = 0;x < 5; x++){
        for(int y = 0;y < 6; y++){
            string end = (y<4) ? ", " :
                         (y<8)? " = " : "\n";
            cout << plan[x][y] << end;
        }
    }
    cout << "o valor da soma eh: " << total << endl;




    system("pause");
    return 0;
}


*/