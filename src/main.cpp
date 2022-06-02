#include "BFS.hpp"
#include "DFS.hpp"

int main(){

    int opc;
    Labirinto lab;
    Item_1 d;

    while(opc !=  3){

        Menu();
        cout << "DIGITE A OPCAO DESEJADA -> ";
        cin >> opc;

        if(opc == 1){
            Matriz_arq(d);
            Anda_labirinto();
        }

        if(opc == 2){
            LeituraConfig(&lab);
            BFS(&lab);
        }

        if(opc != 1 && opc != 2 && opc != 3){
            cout << "ERRO: Opcao invalida!" << endl;
        }
    }
  
    return 0;
}