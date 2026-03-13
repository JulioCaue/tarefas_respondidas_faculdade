#include <stdio.h>

void main(void){
    //definindo variavel
    int resultado1;
    int resultado2;

    //versões de resultado
    resultado1=10+5*2;
    resultado2=(10+5)*2;

    //print resultado final
    printf("Primeiro resultado: %d\nSegundo resultado: %d",resultado1,resultado2);

    //resultado1 é lido como 10+(5*2)
    
    //resultado2 expecifica operação para (10+5)*2

    //ver output
    getchar();
    getchar();
}


//Desenvolva um programa que calcule o resultado da expressão:
//resultado = 10 + 5 * 2
//Depois modifique o programa utilizando parênteses:
//resultado = (10 + 5) * 2
//Compare os resultados.