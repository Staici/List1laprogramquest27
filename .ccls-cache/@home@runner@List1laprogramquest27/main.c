#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;
    float media_aritmetica, media_geometrica;

    // Solicita os três números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    // Calcula a média aritmética
    media_aritmetica = (num1 + num2 + num3) / 3;

    // Calcula a média geométrica
    media_geometrica = pow((num1 * num2 * num3), 1.0 / 3);

    // Imprime os resultados
    printf("Média aritmética: %.2f\n", media_aritmetica);
    printf("Média geométrica: %.2f\n", media_geometrica);

    return 0;
}
