#include <stdio.h>
#include <locale.h>

void main(void){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    //definindo variaveis
    float preço;
    int quantidade;
    float resultado;

    //atribui os valores do usuario as variaveis
    printf("Digite o preço: ");
    scanf("%f", &preço);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    //condicionais para resultado
    resultado=preço*quantidade;

    //print resultado final
    printf("resultado: %.2f",resultado);

    //ver output
    getchar();
    getchar();
}

//Desenvolva um programa que leia o preço de um produto e a quantidade
//comprada, calcule o valor total da compra (total = preco * quantidade) e mostre
//o valor total.