/*
---------------------------------------
# ✅ xc+027
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+027]
AS
/*
#include <iostream> //biblioteca padrão
#include <windows.h> //para limpar a tela. **nao funciona no linux
#include "funcoes.h" //biblioteca com as funções da agenda
#include <string> //biblioteca para manipulação de strings
#include <fstream>//para entrada/saida manipulação de arquivos

using namespace std;


/*------------------------------------|
* função menu, void                   |
*                                     |
* função que monta as opçoes          |
*------------------------------------*/

void menu(){

    system("cls");//nao funciona no linux

    desenha(1);//essa função só desenha uma linha na tela
    cout <<" >>>>>>>> AGENDA  <<<<<<<<\n\n" << endl;
    desenha(1);

        desenha(0);
    cout <<"\n\tEscolha a opcao:" << endl;
    cout <<"1 - Insere contato." << endl;
    cout <<"2 - remove contato." << endl;
    cout <<"3 - Mostra Contatos" << endl;
    cout <<"4 - Sair do programa." << endl;
    desenha(0);
}


int main()
{

    //ponteiros para o inicio e final da lista
    TLista * Inicio = NULL, * Fim = NULL, add;


    //carrega os dados direto do arquivo pro nó
    abrirArquivo(&Inicio, &Fim);

    int opc;//variavel para as opcões

    do{//Loop principal que fica voltando para o menu
        menu(); //chamada para a escolha das opçoes da agenda

        //valida a opção
        do {

            cin >> opc;

            }while(opc < 1 || opc > 4);

            //case para as escolhas
            switch( opc ) {

                case 1:// insere contato

                /*testa se o nome tem mais de 30 caracteres
                 se tiver, manda escrever novamente ou se possui ; na string*/
                do{
                    cout <<"Informe o nome: " << endl;
                    cin.sync();
                    getline(cin,add.nome); //pega o nome

                }while ( ( int(add.nome.length()) > 30) || add.nome.find(';')!= string::npos);

                //CONVERTE a string para minuscula
                for( int i = 0; i < int(add.nome.length()); i ++)
                    add.nome[i] = tolower(add.nome[i]);


                  /*testa se o data tem mais de 10 caracteres
                 se tiver, manda escrever novamente ou se possui ; na string*/
                do{
                    cout <<"Informe o ano de nascimento (dd/mm/aaa): " << endl;
                    cin.sync();
                    getline(cin,add.data);//pega a data
                }while( int(add.data.length()) > 10 || add.data.find(';')!= string::npos);

                //chama a funcao que insere ordenado
                insereOrdenado(add.nome,add.data, &Inicio, &Fim );

                cout <<"\n\tAdicionado!" << endl;
                cout <<"\nAperte ENTER:" << endl;
                cin.get();

                break;

                //deleta contato de maior prioridade
                case 2:

                TLista *delCont;

                delCont = Inicio;
                if(Inicio == Fim) { Inicio = Fim = NULL; }

                else { Inicio = delCont->prox; }

                delete delCont; //deleta delCont

                cout <<"Contato de maior prioridade deletado! " << endl;

                cout <<"\nAperte ENTER:" << endl;
                cin.get();
                cin.get();

                break;

                //mostra contato - lista
                case 3:

                desenha(1);
                cout <<">>> LISTA <<< "<< endl;
                mostra (Inicio, 0);  //parametro 0, só imprime na tela (veja o codigo em "funcoes.h"
                desenha(1);

                cout <<"\nAperte ENTER:" << endl;
                cin.get();
                cin.get();
                break;

                case 4:

                desenha(0);
                cout << "\nFim do programa!" << endl;
                break;

                default: cout <<"opcao errada\n" << endl; break;

                } //fim do case

                }while(opc != 4); //fim do loop principal

                cin.get();

                mostra (Inicio, 1); //parametro 1, grava os dados no arquivo

                libera(Inicio); //libera toda a memoria alocada que a lista usou

    return 0;
}

#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
#include <fstream> //manipulação de arquivos

#define INICIO 1
#define FIM    2
#define MEIO   3

using namespace std;

//Struct com o nó na lista
//------------------------------------------------------------------------
typedef struct NoProx
{
   string nome;//nome do contato
   string data;//data de nacimento do contato

   struct NoProx *prox;
}TLista;

//------------------------------------------------------------------------

/*------------------------------------|
* função desenha, void                |
* parametros: 1 ou 0                  |
* função que desenha linhas da janela |
*------------------------------------*/


void desenha(int i)
{
    if( i == 0)
        cout<<"\nÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ"<<endl;

        else if ( i == 1)
            cout <<"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ\n" << endl;
}

//------------------------------------------------------------------------

/*-------------------------|
* função insereNo, void    |
* recebe o nome e a data   |
*-------------------------*/

//chave = nome
void insereNo( string nome_insere, string data_insere, TLista * EndIns, int Posicao, TLista ** Inicio, TLista ** Fim )
{
    TLista * NovoNo;       //ponteiro para o novo no
    NovoNo = new( TLista );//aloca memoria para o novo no
    NovoNo->nome = nome_insere; // nome do contato
    NovoNo->data = data_insere; // data do contato

    if( *Inicio == NULL ){ //se Lista vazia insere no Inicio
       *Inicio = *Fim = NovoNo;
       NovoNo->prox=NULL;
    }

    else{ //senao o NO sera inserido na posicao INICIO ou FIM ou MEIO
       switch( Posicao ){
          case INICIO:
               NovoNo->prox = *Inicio;
               *Inicio = NovoNo;
               break;

          case FIM:
               NovoNo->prox = NULL;
               ( *Fim )->prox = NovoNo;
               *Fim = NovoNo;
               break;

          default://inseere no MEIO
             NovoNo->prox = EndIns->prox;
             EndIns->prox = NovoNo;
             if(EndIns == *Inicio)
                *Fim = NovoNo;
       }
    }
} //fim da função insereNo


//------------------------------------------------------------------------
/*------------------------------|
* função insereOdenado, void  |
* recebe o nome e a data        |
*--------------------------- -*/

void insereOrdenado( string nome, string data, TLista** Inicio, TLista** Fim )
{
   if( (*Inicio)==NULL){ //lista vazia
      insereNo( nome, data, NULL, INICIO, Inicio, Fim );
   }else{ //lista nao esta vazia
     TLista  * aux, //pontero para o atual
             * aux2;//pontero para o anterior
     //procura a posicao certa para inserir a nova chave
     for( aux = aux2 = *Inicio;            //inicializacao
         aux != NULL && aux->nome < nome;//teste
         aux2 = aux, aux = aux->prox );    //incremento

      if( aux == aux2 )      //caso inicio
         insereNo(nome, data, *Inicio, INICIO, Inicio, Fim);
      else if( aux2 == *Fim )//caso fim
               insereNo(nome, data, NULL, FIM, Inicio, Fim);
           else              //caso meio
               insereNo(nome, data, aux2, MEIO, Inicio, Fim);
    }
}//fim da função insereOrdenado
//------------------------------------------------------------------------

/*-------------------------------------------------|
* funcao abrirArquivo, void                        |
* abre os dados do arquivo "agenda.csv  "          |
*-------------------------------------------------*/

void abrirArquivo (TLista** Inicio, TLista** Fim) {

    string bufferArquivo; // variavel q recebe a linha(getline) do arquivo

    fstream aux("agenda.csv");//canl de entrada

    if(aux == NULL){//senao existir, cria um novo.
        aux.open("agenda.csv",ios::out);
        aux.close();

        }

    ifstream arq;//canal de entrada

    arq.open("agenda.csv",ios::in);//Leitura

    //testa o arquivo
    if(arq.fail()) {
        cout <<"Erro na abertura do arquivo!!" << endl;
        arq.close();
        exit(1);
         }

         else {
             //string que receberão nome e data
             string nome, data;

            //enquanto nao for fim do arquivo
             while (!arq.eof()){

                 getline(arq, bufferArquivo);//pega a primeira linha do arquivo

                 //grava o nome da variavel da posição 0 até achar ';'
                nome = bufferArquivo.substr(0, bufferArquivo.find_first_of(';'));

                 //grava a data de nascimento partindo do ';' até final da string "bufferArquivo"
                data = bufferArquivo.substr(bufferArquivo.find_first_of(';')+1 );

                if(nome != ""){//se nome for diferente de campo vazio insere
                //chama a função que insere ordenado.
                insereOrdenado( nome, data, Inicio, Fim);
                }
                //e repete até fim do arquivo.

                }
         }

        //fecha o arquivo
         arq.close();

} //fim da função abrirArquivo


//------------------------------------------------------------------------

/*-------------------------------------------------|
* funcao libera, void                              |
* libera toda a memoria alocada que a lista usou   |
*-------------------------------------------------*/

void libera( TLista * Inicio )
{
   TLista * aux;
   while( Inicio ){
     aux = Inicio->prox;
     delete Inicio;
     Inicio = aux;
   }
}//fim da função libera

//------------------------------------------------------------------------

/*---------------------------------------------------|
* função mostra, void                                |
*                                                    |
* função que mostra os contatos armazenados          |
* parametro: 0 = só mostra o que tem na lista        |
* parametro: 1 = salva a lista no arquivo            |
*---------------------------------------------------*/
void mostra( TLista * Inicio, int opc ) {

    TLista *NoAux;

    NoAux = Inicio;

    // 0 - mostra
    if ( opc == 0 ){
            desenha(1);
            cout<<"Lista de contatos: \n\n";

        while( NoAux ){
            cout<<"\nNome: " << NoAux->nome <<" | Data de nascimento: ";
            cout<<NoAux->data<< endl;
            NoAux = NoAux->prox;
            }
            }
            //2 - grava
            else if (opc == 1){

                ofstream fgrava;

                fgrava.open("agenda.csv",ios::trunc);//deleta todo arquivo

                fgrava.close();

                fgrava.open ("agenda.csv",ios::app);

                //testa o arquivo
                if(fgrava.fail()) {
                    cout <<"Erro na abertura do arquivo" << endl;
                    fgrava.close();
                    exit(1);
                    }

                while( NoAux ){
                    fgrava<<NoAux->nome <<";" << NoAux->data<<endl;
                    NoAux = NoAux->prox;
                    }

                    fgrava.close();//fecha o arquivo
                    }
}//fim da função mostra


#endif // FUNCOES_H_INCLUDED



*/