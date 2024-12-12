#include "lib.h"
//Utilizar vetor dinamico

bool buscaSequencial(int * vetor,int * tamanho,int dado){
    if(vetor == NULL){
        cout << "\nVetor nao alocado\n";
        return false;
    }   
    for(int i = 0; i < (*tamanho);i++){
        if(vetor[i]==dado){
            return true;
        }
    }
    return false;
}

bool buscaBinaria(int * vetor,int * tamanho, int dado){
    int * vetorCopia = (int*)malloc((*tamanho)*sizeof(int));

    for(int i = 0 ;i<(*tamanho);i++){
        vetorCopia[i] = vetor[i];
    }
    ordenaBubbleSort(vetorCopia,tamanho);
    int start(0),end=(*tamanho)-1;

    while(start <= end){
        int middle = start +(end - start)/2;
        if(vetorCopia[middle] = dado){
            free(vetorCopia);
            return true;
        }
        if(vetorCopia[middle]<dado){
            start = middle+1;
        }else{
            end = middle-1;
        }
    }
    free(vetorCopia);
    return true;
}

void ordenaBubbleSort(int * vetor,int * tamanho){
    if(vetor == NULL){
        cout << "\nVetor nao alocado\n";
        return;
    }
    for(int i = 0;i<(*tamanho)-1;i++){
        for(int j = 0;j<(*tamanho)-1;j++){
            if(vetor[j]>vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
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
    if(vetor == NULL){
        cout << "\nVetor nao alocadon\n";
        return;
    }
    if(i != tamanho){
        cout<< vetor[i] << " - ";
        i++;
        imprimeRec(vetor,i,tamanho);
    }else{
        cout << " Fim\n";
        return;
    }
}