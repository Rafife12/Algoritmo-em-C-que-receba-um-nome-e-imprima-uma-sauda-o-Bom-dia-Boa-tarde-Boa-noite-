/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <time.h>

int main() {
    char nome[50];
    int hora;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    // Obtém a hora atual do sistema
    time_t agora;
    struct tm *infoTempo;
    time(&agora);
    infoTempo = localtime(&agora);
    hora = infoTempo->tm_hour;
    
    // Saudação baseada na hora do sistema
    if (hora >= 5 && hora < 12)
        printf("Bom dia, %s!\n", nome);
    else if (hora >= 12 && hora < 18)
        printf("Boa tarde, %s!\n", nome);
    else
        printf("Boa noite, %s!\n", nome);
    
    return 0;
}