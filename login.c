#include <stdio.h> 
       // Biblioteca padrão para entrada e saída (ex: printf, scanf)
#include <string.h>    
   // Biblioteca para manipulação de strings 
#include "login.h"  
      // Inclusão do cabeçalho personalizado onde estão declaradas variáveis/funções 

// Definição das variáveis globais (também declaradas como extern no arquivo login.h)
char LOGIN_CORRETO[] = "jujudopix";  
 // Armazena o login correto
char SENHA_CORRETA[] = "1234";     
   // Armazena a senha correta

// Implementação da função que verifica o login do usuário
int verificarLogin() {
    char loginDigitado[20];     
// Variável local para armazenar o login digitado pelo usuário
    char senhaDigitada[20];  
   // Variável local para armazenar a senha digitada pelo usuário

    // Exibe o título da seção de login
    printf("\n--- Login ---\n");

    // Solicita ao usuário que digite o login
    printf("Digite o login: ");
    scanf("%s", loginDigitado);  
 // Lê o login digitado e armazena na variável loginDigitado

    // Solicita ao usuário que digite a senha
    printf("Digite a senha: ");
    scanf("%s", senhaDigitada);  
 // Lê a senha digitada e armazena na variável senhaDigitada

    // Compara o login e a senha digitados com os valores corretos
    if (strcmp(loginDigitado, LOGIN_CORRETO) == 0 && strcmp(senhaDigitada, SENHA_CORRETA) == 0) {
        // Se ambos forem iguais, o login foi bem-sucedido
        printf("Login bem-sucedido!\n");
        return 1;
 // Retorna 1 para indicar sucesso
    } else {
        // Se o login ou a senha estiverem incorretos
        printf("Login ou senha incorretos.\n");
        return 0; // Retorna 0 para indicar falha
    }
}

// julia Zakovsky 