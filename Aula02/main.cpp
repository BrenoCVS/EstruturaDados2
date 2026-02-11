#include <iostream>
#include "ordenar.h"
using namespace std;

int main()
{
    int opc, opc2, tam = 5;
    do{
        cout << "\nEsolha uma opção:\n"
        "1 - Preencher vetor\n"
        "0 - Sair\n"
        "->";
        cin >> opc;

        switch(opc){

            case 1:{
                int vet[tam]= {};
                preencheVetor(vet, tam);
                do{

                    cout << "\nEsolha um metodo de ordenacao:\n"
                        "1 - Bubble Sort\n"
                        "2 - \n"
                        "3 - \n"
                        "0 - Sair\n"
                        "->";
                    cin >> opc2;

                    switch(opc2){
                        case 1:
                            bubble(vet, tam);
                        break;
                        case 2:

                        break;
                        case 3:

                        break;
                        case 0:
                            cout << "\nSaindo do sistema\n";
                        break;
                        default:
                            cout << "\nopcao invalida\n";
                    }
                } while(opc2 != 0);
            }
            break;

            case 0:
                cout << "\nSaindo do sistema";
            break;
            default:
                cout << "\nOpção invalida";
        }
    } while(opc != 0);
    return 0;
}
