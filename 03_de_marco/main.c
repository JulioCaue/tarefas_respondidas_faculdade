#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <fcntl.h>
#include <io.h>

void limpar_tela(){
    #if defined(_WIN32) || defined (_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    wchar_t nome[50];
    int idade;
    float altura;

    _setmode(_fileno(stdin), _O_WTEXT);

    printf("á é í ó ú ç Á É Í Ó Ú Ç e ê Ê\n");

    printf("Digite seu nome: ");
    fgetws(nome,sizeof(nome),stdin);

    printf("Digite sua idade: ");
    wscanf(L"%d",&idade);

    printf("Digite sua altura: ");
    wscanf(L"%f",&altura);

    limpar_tela();

    wprintf(L"\nSeu nome é: %lsSua idade é: %d\nSua altura é:%.2f",nome,idade,altura);

    getchar();
    getchar();

    return 0;
}