#include <iostream>
#include <string.h>

int main(){
    int idade;
    float prova1, prova2, media;
    char nome[40];
    
    idade = 23;
    prova1 = 7.0;
    prova2 = 8.0;
    media = (prova1 + prova2) / 2;
    strcpy (nome, "Bento");

    printf ("A media de %s e: %.2f", nome, media);    
    return 0;
}
