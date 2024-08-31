#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void calculasoma(float numero1, float numero2) {
    float resultado;
    resultado = numero1 + numero2;
    if (abs(resultado) < 1e-3f || abs(resultado) > 1e3f) {
        cout << endl << "Resultado da multiplicacao: " << scientific << setprecision(2) << resultado << endl << endl;
    } else {
        cout << endl << "Resultado da multiplicacao: " << resultado << endl << endl;
    }
}

void calculasubtracao(float numero1, float numero2){
    float resultado;
    resultado = numero1 - numero2;
    if (abs(resultado) < 1e-3f || abs(resultado) > 1e3f) {
        cout << endl << "Resultado da multiplicacao: " << scientific << setprecision(2) << resultado << endl << endl;
    } else {
        cout << endl << "Resultado da multiplicacao: " << resultado << endl << endl;
    }
}

void calculamultiplicacao(float numero1, float numero2){
    float resultado;
    resultado = numero1 * numero2;
    if (abs(resultado) < 1e-3f || abs(resultado) > 1e3f) {
        cout << endl << "Resultado da multiplicacao: " << scientific << setprecision(2) << resultado << endl << endl;
    } else {
        cout << endl << "Resultado da multiplicacao: " << resultado << endl << endl;
    }
}

void calculadivisao(float numero1, float numero2){
    float resultado;
    resultado = numero1 / numero2;
    cout << endl <<"Resultado da divisao: " << scientific << setprecision(2) << resultado << endl << endl;
}

int main() {
    float numeros[2];
    char operacao,saida[3];

    while(strcasecmp(saida,"-1") != 0){
        system("cls");
        cout << "CALCULADORA CIENTIFICA" << endl << endl;
        cout << "Digite o tipo da operacao(*,/,+,-): ";
        fflush(stdin);
        cin >> operacao;
        cout << "Digite o primeiro numero(pode usar notacao cientifica, ex: 1.23e4): ";
        cin >> numeros[0];
        cout << "Digite o segundo numero(pode usar notacao cientifica, ex: 1.23e4): ";
        cin >> numeros[1];

        switch(operacao){
            case '*':
                calculamultiplicacao(numeros[0],numeros[1]);
                break;
            case '/':
                calculadivisao(numeros[0],numeros[1]);
                break;
            case '+':
                calculasoma(numeros[0],numeros[1]);
                break;
            case '-':
                calculasubtracao(numeros[0],numeros[1]);
                break;
            default:
                cout << "Nao foi posivel realizar a operacao.Por favor, tente novamente" << endl;
                break;
        }
        cout << "Para sair, digite -1. Para continuar, pressione enter para continuar: ";
        fflush(stdin);
        cin.getline(saida,size(saida));

    }
    return 0;
}