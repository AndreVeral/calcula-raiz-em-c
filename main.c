#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    double numero;
    double resultado;
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Digite um número inteiro maior ou menor do que zero: \n");
    scanf("%lf", &numero);
    if(numero >= 0){
        resultado = sqrt(numero);
        wprintf(L"A raiz quadrada de %f é: %f", numero , resultado);
    }else{
        wprintf(L"Número inválido");
    }
    return 0;
}