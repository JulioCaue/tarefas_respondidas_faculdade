#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fcntl.h>


//função pra limpar a tela
void limpar_tela(){
    #if defined(_WIN32) || defined (_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

//logica para windows (com variaveis wide)
//só tristeza aqui como um todo, sinceramente
void logica_windows(){
    #include <windows.h>
    #include <io.h>
    system("chcp 65001 > nul"); //acho que isso troca o encoding do terminal (???)
    setlocale(LC_ALL, "pt_BR.UTF-8");
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
}

void logica_linux(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[50];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    fgets(nome,sizeof(nome),stdin);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    void limpar_tela()

    printf("\nSeu nome: %sSua idade: %dSua altura: %.2f",nome,idade,altura);

    getchar();
    getchar();

}

#if defined(_WIN32) || defined (_WIN64)
    void logica_windows();
#else
    void logica_linux();
#endif


//Tarefa: "informar nome, idade e altura. Depois informar esses dados pro usuário" 
