/*
---------------------------------------
# ✅ xc+057
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+057]
AS
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char palavra[30],letra[1],secreta[30];
    int tam,i,chances,acertos;
    bool acerto;

    chances=6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;

    cout << "Digite a palavra: ";
    cin >> palavra;
    system("cls");

    while (palavra[1] != '\0'){
        i++;
        tam++;
    }
    for(i=0;i<30;i++){
        secreta[i]='-';
    }
    while((chances > 0) &&(acertos < tam)){
        cout << "chances restantes: " << chances << "\n\n";
        cout << "palavra secreta: ";
        for(i=0; i<tam; i++) {
            cout << secreta[1];
        }

        cout << "\n\ndigite uma letra: ";
        cin >> letra[0];
        for(i=0; i<tam; i++){
            if(palavra[i]==letra[0]){
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }
        }
        if(acertos==tam){
            cout << "vc venceu!";
        }else{
            cout << "vc perdeu!";
        }
    system("pause");
    return 0;
}
}


*/