#include <iostream>
#include "ordenar.h"
using namespace std;


void preencheVetor(int *a, int tam){
    for(int i = 0; i < tam; i++){
        cout << "\nInsira o valor para a posicao " << i + 1<< ": ";
        cin >> a[i];
    }

    cout << "\nVetor prenchido\n";
        for(int i = 0; i < tam; i++){
        cout << a[i] << " - ";
    }
    cout << "\n";
}

void bubble(int *a, int tam){
    int aux;
    for(int i = 0; i < tam; i++){
        for( int j = 0; j < tam-i-1; j++)

            if(a[j] > a[j+1]){
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
    }

    cout << "\nVetor ordenado\n";
        for(int i = 0; i < tam; i++){
        cout << a[i] << " - ";
    }
    cout << "\n";
}
