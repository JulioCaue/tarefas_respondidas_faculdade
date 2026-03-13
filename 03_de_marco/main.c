#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fcntl.h>
#include <string.h>

//nota: ESSE TIPO DE IF É O ERRADO!!!!! aparentemente.
//TROCAR DEPOIS!

//Adiciona bibliotecas de windows apenas no SO certo
#if defined(_WIN32) || defined (_WIN64)
    #include <windows.h>
    #include <io.h>
    #include <wchar.h>
#endif

//função pra limpar a tela
void limpar_tela(void){
    #if defined(_WIN32) || defined (_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

//compila bloco apenas em windows
#if defined(_WIN32) || defined (_WIN64)
    //logica para windows (com variaveis wide)
    void logica_windows(void){
        //Faz terminal rodar em UTF-8
        system("chcp 65001 > nul"); //"chcp 65001" troca terminal para UTF-8. "> nul" remove mensagem "Active code page: 65001"
        setlocale(LC_ALL, "pt_BR.UTF-8");
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);

        //aqui w = wide = dois bytes ao envés de um por caractere (aparentemente) em UTF-16
        // caracteres como "ê" são dois bytes pelo que parece, portanto faço assim
        // tá funcionando pelo menos
        wchar_t nome[50]; 
        int idade;
        float altura;

        //transforma stdin em wide (tratar entrada como wide chars)
        _setmode(_fileno(stdin), _O_WTEXT);

        //teste
        printf("á é í ó ú ç Á É Í Ó Ú Ç e ê Ê\n");

        printf("Digite seu nome: ");
        fgetws(nome,sizeof(nome),stdin);
        //remove o "\n" no final da string e troca ele por "/0" (terminador nulo/fim da string)
        nome[wcscspn(nome,L"\n")]=L'\0';

        //O "L" transforma as literal strings em wide literal strings 
        printf("Digite sua idade: ");
        wscanf(L"%d",&idade);

        printf("Digite sua altura: ");
        wscanf(L"%f",&altura);

        limpar_tela();

        //"%.2f" é formatação para apenas duas casas decimais.
        wprintf(L"\nSeu nome é: %ls\nSua idade é: %d\nSua altura é:%.2f",nome,idade,altura);

        //mantém programa aberto
        getchar();
        getchar();
    }
#endif

//logica para linux, com chars normais
void logica_linux(void){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[50];
    int idade;
    float altura;

    //teste
    printf("á é í ó ú ç Á É Í Ó Ú Ç e ê Ê\n");

    printf("Digite seu nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome,"\n")]='\0';

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    limpar_tela();

    //"%.2f" é formatação para apenas duas casas decimais.
    printf("\nSeu nome é: %s\nSua idade é: %d\nSua altura é: %.2f",nome,idade,altura);

    //mantém programa aberto
    getchar();
    getchar();
}

int main(void){
    #if defined(_WIN32) || defined (_WIN64)
        logica_windows();
    #else
        logica_linux();
    #endif
    return 0;
}
