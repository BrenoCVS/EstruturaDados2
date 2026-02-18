
#include <iostream>
#include "header.h"
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

void selection(int *a,int tam){
    int aux, posicao;
    for(int i = 0; i < tam; i++){

      posicao = i;
      for(int j = i; j < tam; j++){
        
          if(a[j] < a[posicao]) {
            posicao = j;
          }
          
      }
      
      aux = a[i];
      a[i] = a[posicao];
      a[posicao] = aux;
    }

    cout << "\nVetor ordenado\n";
        for(int i = 0; i < tam; i++){
        cout << a[i] << " - ";
    }
}

void insertion(int *a, int tam){

    for(int i = 1; i < tam; i++){

        int chave = a[i];  
        int j = i - 1;

        while(j >= 0 && a[j] > chave){
            a[j + 1] = a[j];   
            j--;
        }

        a[j + 1] = chave;  
    }

    cout << "\nVetor ordenado\n";
    for(int i = 0; i < tam; i++){
        cout << a[i] << " - ";
    }
}
