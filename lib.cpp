#include "lib.h"
//Utilizar vetor dinamico

bool buscaSequencial(int * vetor,int dado){

    return true;
}

bool buscaBinaria(int * vetor, int dado){
    
    return true;
}

int * ordenaBubbleSort(int * vetor){

}

int* insereInicio(int * vetor,int* tamanho,int dado){
    if(vetor == NULL){
        vetor = (int*)malloc(sizeof(int));
        vetor[0] = dado;
        (*tamanho)++;
        return vetor;
    }else{
        //Realoc do tamanho atual do vetor +1
        vetor = (int*)realloc(vetor,((*tamanho)+1)*sizeof(int));
        //Empurar todo mundo para frente e então inserir o novo dado em vetor[0]
            for(int i = *tamanho ;i>0;i--){
                vetor[i] = vetor[i-1];
            }
            vetor[0] = dado;
            (*tamanho)++;
            return vetor;
    }

}

int* insereFinal(int * vetor,int* tamanho,int dado){
    if(vetor == NULL){
        return insereInicio(vetor,tamanho,dado);
    }else{
        vetor = (int*)realloc(vetor,((*tamanho)+1)*sizeof(int));
        vetor[(*tamanho)] = dado;
        (*tamanho)++;
        return vetor;
    }
}

void imprimeRec(int *vetor,int i,int tamanho){
    if(i != tamanho){
        cout<< vetor[i] << " - ";
        i++;
        imprimeRec(vetor,i,tamanho);
    }else{
        cout << " Fim\n";
        return;
    }
}