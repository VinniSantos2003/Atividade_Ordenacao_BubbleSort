#include "lib.h"


int menu(){
    int op(0);
    cout << "1 - Realizar busca sequencia\n";
    cout << "2 - Realizar busca Binaria\n";
    cout << "3 - Realizar BubbleSort\n";
    cout << "4 - Inserir dado no inicio\n";
    cout << "5 - Inserir dado no final\n";
    cout << "6 - Imprimir\n";
    cout << "Escolha: ";
    cin >> op;
    return op;
}

int main(){
    int * v = NULL;
    int op(0),dado(0),tamanho(0);

    do{
        op = menu();
        switch(op){
        case 1:
            cout<<"Digite um numero a ser procurado no vetor: ";
            cin >> dado;
            if(buscaSequencial(v,&tamanho,dado)){
                cout << "\nDado encontrado\n";
            }else{
                cout << "\nDado nao encontrado\n";
            }
            break;
        case 2:
            cout<<"Digite um numero a ser procurado no vetor: ";
            cin >> dado;
            if(buscaBinaria(v,&tamanho,dado)){
                cout << "\nDado encontrado\n";
            }else{
                cout << "\nDado nao encontrado\n";  
            }
            break;
        case 3:
            ordenaBubbleSort(v,&tamanho);
            break;
        case 4:
            cout << "Digite um numero para ser inserido no inicio vetor: " ;
            cin >> dado;
            v = insereInicio(v,&tamanho,dado);
            break;
        case 5:
            cout << "Digite um numero para ser inserido no final vetor: " ;
            cin >> dado;
            v = insereFinal(v,&tamanho,dado);
            break;
        case 6:
            imprimeRec(v,0,tamanho);
            break;
        default:
            break;
        }
    }while(op != 0);
    return 0;
}
