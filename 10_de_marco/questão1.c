#include <stdio.h>

void main(void){
    //definindo variaveis
    int num1;
    int num2;
    int resultado;

    //atribui os valores do usuario as variaveis
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    //condicionais para resultado
    resultado=num1+num2;

    //print resultado final
    printf("resultado: %d",resultado);

    //ver output
    getchar();
    getchar();
}

//Desenvolva um programa que leia dois números inteiros, calcule a soma entre
//eles e mostre o resultado na tela.