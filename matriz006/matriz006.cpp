//6) Some os elementos pares da matriz e escreva o resultado na tela.
#include <iostream>
using namespace std;
int main()
{
    int lin, col, matriz[3][3], soma;
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            cout << "digite um valor: ";
            cin >> matriz[lin][col];
        }
    }
    soma = 0;
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++) {
            if (matriz[lin][col] % 2 == 0) {
                soma = matriz[lin][col] + soma;
            }
        }
    }
    cout << "A soma dos elementos pares da matriz eh: " << soma;
}