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
    resultado=num1>num2;

    //print resultado final
    if (resultado==0)
        printf("resultado: False");
    
    else
        printf("resultado: True");
    //ver output
    getchar();
    getchar();
}


//Desenvolva um programa que leia dois números inteiros e mostre o resultado da
//comparação numero1 > numero2.