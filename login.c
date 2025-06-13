#include <stdio.h>
#include <string.h>
#include "login.h"

// Definicao das variaveis globais (extern no .h)
char LOGIN_CORRETO[] = "jujudopix";
char SENHA_CORRETA[] = "1234";

// Implementacao da funcao de verificacao de login
int verificarLogin() {
    char loginDigitado[20];
    char senhaDigitada[20];

    printf("\n--- Login ---\n");
    printf("Digite o login: ");
    scanf("%s", loginDigitado);

    printf("Digite a senha: ");
    scanf("%s", senhaDigitada);

    if (strcmp(loginDigitado, LOGIN_CORRETO) == 0 && strcmp(senhaDigitada, SENHA_CORRETA) == 0) {
        printf("Login bem-sucedido!\n");
        return 1; // Sucesso
    } else {
        printf("Login ou senha incorretos.\n");
        return 0; // Falha
    }
}
//julia Zakovsky 

