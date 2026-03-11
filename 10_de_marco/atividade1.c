#include <stdio.h>

int main(){
    //definindo variaveis
    int num1;
    int num2;
    int resultado;

    //atribui os valores do usuario as variaveis
    printf("Digite o primeiro numero");
    scanf("%d", &num1);

    printf("Digite o segundo numero");
    scanf("%d", &num2);

    //condicionais para resultado
    if (num1>num2){
        resultado=(num1-num2);
    }
    
    if (num2<num1){
        resultado=(num2-num1);
    }

    if (num1==num2){
        resultado=0;
    }

    //print resultado final
    printf("Diferença entre numeros de %d %d %d",resultado,num1,num2);

    //ver output
    getchar();
    getchar();

    return 0;
}