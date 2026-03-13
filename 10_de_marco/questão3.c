#include <stdio.h>

void main(void){
    //definindo variaveis
    int base;
    int altura;
    int area;

    //atribui os valores do usuario as variaveis
    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite a altura: ");
    scanf("%d", &altura);

    //condicionais para resultado
    area=base*altura;

    //print resultado final
    printf("resultado: %d",area);

    //ver output
    getchar();
    getchar();
}

//Desenvolva um programa que leia a base e a altura de um retângulo, calcule a
//área (area = base * altura) e mostre o valor da área.