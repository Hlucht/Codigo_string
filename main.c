#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   int TAM = 200, tamTexto, tamPalavra, indTexto, indPalavra, achouPalavra = 0;
   char texto[TAM];
   char palavra[TAM];

   printf("Digite um texto: ");
   gets(texto);

   printf("Digite uma palavra: ");
   gets(palavra);

   tamTexto = strlen(texto);
   tamPalavra = strlen(palavra);

   for(indTexto=0; indTexto<(tamTexto-tamPalavra); indTexto++) {
    indPalavra = 0;
    while(texto[indTexto+indPalavra] == palavra[indPalavra] && indPalavra+indTexto < tamTexto) {
        indPalavra++;
        //printf("L[%c] P[%d]\n", texto[indTexto+indPalavra],indTexto+indPalavra );
    }

    if(indPalavra == tamPalavra) {
        achouPalavra = indTexto;
    }
   }

   if(achouPalavra > 0) {
        printf("Achou na posicao inical %d\n", achouPalavra);
   } else {
        printf("Nao encontrada\n");
   }

    return 0;
}
