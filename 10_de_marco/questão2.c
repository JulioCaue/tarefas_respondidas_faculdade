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

    //bloco condicional pra resultados
    if (num1>num2)
        resultado=num1-num2;
    else if (num2<num1)
        resultado=num2-num1;
    else
        resultado=0;

    //print resultado final
    printf("resultado: %d",resultado);

    //ver output
    getchar();
    getchar();
}

//Desenvolva um programa que leia dois números inteiros, calcule a diferença entre
//eles e mostre o resultado.