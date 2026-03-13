#include <stdio.h>

void main(void){
    //definindo variaveis
    int num1;
    int num2;
    int num3;
    int resultado;

    //atribui os valores do usuario as variaveis
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    //condicionais para resultado
    resultado=num1*num2*num3;

    //print resultado final
    printf("resultado: %d",resultado);

    //ver output
    getchar();
    getchar();
}


//Desenvolva um programa que leia três números inteiros, calcule o produto entre
//eles (resultado = n1 * n2 * n3) e mostre o resultado.