#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main()
{

    char notasEscolhidas[256], nomeMusica[40];
    int i = 0, escolhaVelocidade;
    int* duracao[6];

    printf("Digite o nome da musica: ");
    fgets(nomeMusica, 40, stdin);

    printf("Voce quer notas rapidas ou lentas?\n\n1 - Rapido\n2 - Lento\n\n1 ou 2: ");
    scanf(" %d", &escolhaVelocidade);

    if(escolhaVelocidade == 1){
        duracao[0] = 191;
        duracao[1] = 170;
        duracao[2] = 152;
        duracao[3] = 143;
        duracao[4] = 135;
        duracao[5] = 114;
        duracao[6] = 110;
    } else {
        duracao[0] = 382;
        duracao[1] = 340;
        duracao[2] = 304;
        duracao[3] = 286;
        duracao[4] = 270;
        duracao[5] = 228;
        duracao[6] = 220;
    }

    do{
        printf("Digite a nota (C, D, E, F, G, A, B)[P para tocar, ou S para uma pausa]: ");
        scanf(" %c", &notasEscolhidas[i]);

        if(notasEscolhidas[i] == 'C' || notasEscolhidas[i] == 'D' || notasEscolhidas[i] == 'E' || notasEscolhidas[i] == 'F' || notasEscolhidas[i] == 'G' || notasEscolhidas[i] == 'A' || notasEscolhidas[i] == 'B' || notasEscolhidas[i] == 'S'){
            i++;
        } else if (notasEscolhidas[i] != 'P'){
            printf("Nota invalida. ");
        }

    }while(notasEscolhidas[i] != 'P');

    printf("------------------------------------------------------\n\nTocando a musica: %s", nomeMusica);

    for(i = 0; notasEscolhidas[i] != '\0' ; i++){
        if(notasEscolhidas[i] == 'C'){
            Beep(523, duracao[0]);
        }else if(notasEscolhidas[i] == 'D'){
            Beep(587, duracao[1]);
        }else if(notasEscolhidas[i] == 'E'){
            Beep(659, duracao[2]);
        }else if(notasEscolhidas[i] == 'F'){
            Beep(698, duracao[3]);
        }else if(notasEscolhidas[i] == 'G'){
            Beep(740, duracao[4]);
        }else if(notasEscolhidas[i] == 'A'){
            Beep(880, duracao[5]);
        }else if(notasEscolhidas[i] == 'B'){
            Beep(988, duracao[6]);
        }else if(notasEscolhidas[i] == 'S'){
            Beep(0, 300);
        }
    }
    return 0;
}