#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

// essas duas não funciona no linux :(
#include <fcntl.h>
#include <io.h>

//função pra limpar a tela
void limpar_tela(){
    #if defined(_WIN32) || defined (_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

int main(){
    system("chcp 65001 > nul"); //acho que isso troca o encoding do terminal (???)
    setlocale(LC_ALL, "pt_BR.UTF-8");

    //daqui pra baixo é só tristeza
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    //aqui w = wide = dois bytes ao envés de um (aparentemente)
    wchar_t nome[50]; 
    int idade;
    float altura;

    //transforma em wide (eu acho???)
    _setmode(_fileno(stdin), _O_WTEXT);

    //teste
    printf("á é í ó ú ç Á É Í Ó Ú Ç e ê Ê\n");

    printf("Digite seu nome: ");
    fgetws(nome,sizeof(nome),stdin);

    //não sei oq esse L faz mas ele tá ai
    printf("Digite sua idade: ");
    wscanf(L"%d",&idade);

    printf("Digite sua altura: ");
    wscanf(L"%f",&altura);

    limpar_tela();

    wprintf(L"\nSeu nome é: %lsSua idade é: %d\nSua altura é:%.2f",nome,idade,altura);

    //aparentemente não funciona, mas tá aqui pra deixar janela aberta
    getchar();
    getchar();

    return 0;
}

