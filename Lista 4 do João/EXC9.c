#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    char palavra[50], palavraAdivinhada[50], chute;
    int tamanho, tentativas = 6, acertos = 0, i, acertou = 0;
    
    printf("Jogo da Forca\n");
    
    
    printf("Digite a palavra para seu amigo jogar: ");
    scanf("%s", palavra);
    
    tamanho = strlen(palavra);
    

    for (i = 0; i < tamanho; i++){
        palavraAdivinhada[i] = '_';
    }
    
    palavraAdivinhada[tamanho] = '\0';
    
    while (tentativas > 0 && acertos < tamanho) {
        printf("\nPalavra que tem que acertar: %s\n", palavraAdivinhada);
        printf("Tentativas restantes: %d\n", tentativas);
        
        
        printf("Escreva uma letra: ");
        scanf(" %c", &chute);
        
        
        for (i = 0; i < tamanho; i++) {
            if (palavra[i] == chute) {
                palavraAdivinhada[i] = chute;
                acertos++;
                acertou = 1;
            }
        }
        
        if (!acertou) {
            printf("Letra incorreta. Vai de novo.\n");
            tentativas--;
        }
    }
    
    if (acertos == tamanho) {
        printf("\nBoa mlk! Você adivinhou a palavra: %s\n", palavra);
    } else {
        printf("\nBoa tentativa mas você perdeu. A palavra era: %s\n", palavra);
    }
    

}
