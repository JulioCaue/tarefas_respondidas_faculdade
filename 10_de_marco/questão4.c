#include <stdio.h>

void main(void){
    //definindo variaveis
    int nota1;
    int nota2;
    int media;

    //atribui os valores do usuario as variaveis
    printf("Digite primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite segunda nota: ");
    scanf("%d", &nota2);

    //condicionais para resultado
    media=(nota1+nota2)/2;

    //print resultado final
    printf("resultado: %d",media);

    //ver output
    getchar();
    getchar();
}

//Desenvolva um programa que leia duas notas, calcule a média (media = (nota1 +
//nota2) / 2) e mostre o valor da média