#include <stdio.h>

int main() {

    int ano_atual, ano_nasc, x;
    char nome[61];

    scanf("%d %s %d", &ano_atual, nome, &ano_nasc);
    x = ano_atual-ano_nasc;
    printf("%s, voce completa %d anos de idade neste ano.\n", nome, x);
    return 0;



}