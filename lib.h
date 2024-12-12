#include <iostream>
#include "vector"
#include "stdlib.h"
using namespace std;

int* insereInicio(int * vetor,int* tamanho,int dado);
void imprimeRec(int *vetor,int i ,int tamanho);
int* insereFinal(int * vetor,int* tamanho,int dado);
bool buscaSequencial(int * vetor,int * tamanho,int dado);
void ordenaBubbleSort(int * vetor,int * tamanho);
bool buscaBinaria(int * vetor,int * tamanho, int dado);