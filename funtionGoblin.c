#include<stdio.h>

void dungeon_in(){
    int op_dungeon_in;

    printf("\nVoce continua em frente e percebe que o terreno muda.\n");
    printf("O solo declina em uma pequena clareira, com arvores menores.\n");
    printf("Entre pedras empilhadas formando pilares, um arco coberto de vinhas\n");
    printf("se ergue, como um portao antigo consumido pelo tempo e pela natureza.\n");
    printf("Algo nele parece convidar voce a entrar...\n");
    printf("O que deseja fazer?\n");
    printf("1 - SEGUIR PELO ARCO DE ROCHAS E VINHAS\n");
    printf("2 - VOLTAR\n");
    printf("---> ");

    scanf("%d", &op_dungeon_in);

    switch (op_dungeon_in) {
        case 1:
            printf("\nVoce adentra a construcao rochosa...\n");
            encontro_goblin();
            break;

        case 2:
            printf("\nVoce retorna pelo caminho que estava fazendo...\n");
            floresta02();
            break;

        default:
            printf("\nOpcao invalida, tente novamente.\n");
            dungeon_in();
            break;
    }
}

void encontro_goblin(){
    int encontro_gb;

    printf("\nVoce passa pelo portao e diante dos arbustos surgem 3 Goblins.\n");
    printf("Armados com lancas velhas e enferrujadas, eles riem de forma cruel,\n");
    printf("mostrando bolsas cheias de objetos roubados, sem notar sua presenca.\n");
    printf("O que deseja fazer?\n");
    printf("1 - LUTAR\n");
    printf("2 - FUGIR\n");
    printf("---> ");

    scanf("%d", &encontro_gb);

    switch (encontro_gb) {
        case 1:
            printf("\nVoce lembra que possui uma faca em seu bolso e se prepara para lutar...\n");
            luta_goblin();
            break;

        case 2:
            printf("\nVoce tenta fugir, mas faz barulho ao pisar em um galho.\n");
            printf("Os goblins lancam suas armas e voce e atingido fatalmente.\n");
            printf("VOCE MORREU...\n");
            break;

        default:
            printf("\nOpcao invalida, tente novamente.\n");
            encontro_goblin();
            break;
    }
}

void luta_goblin(){
    int goblinsVD = 100;
    int playerVD = 100;
    int jogadaATT;
    
    do
    {
          printf("\nVIDA DOS GOBLINS: %d\n", goblinsVD);
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\nSUA VIDA: %d\n", playerVD);
          printf("1 - ATACAR COM A FACA\n");
          printf("2 - FUGIR\n");
          scanf("%d", &jogadaATT);

          if (jogadaATT == 1){

              printf("\nVoce desfere um ataque contra os goblins\n que causa 20 pontos de dano...\n");
              goblinsVD = goblinsVD - 20;

          } else if (jogadaATT == 2){

             playerVD = playerVD - 100; 

          } else{

            printf("\nOpcao invalida, tente novamente.\n");
            scanf("%d", &jogadaATT);
          }


          if (goblinsVD >= 70){

            printf("\nOs Goblins revidam o seu ataque, causando 30 pontos de dano em voce...\n");
            playerVD = playerVD - 30;

          } else if (goblinsVD >= 30){

             printf("\nOs dois goblins restantes te atacam, causando 20 pontos de dano em voce...\n");
            playerVD = playerVD - 20;
            
          } else if (goblinsVD >= 1){

            printf("\nO ultimo dos goblins te ataca, causando 10 pontos de dano em voce...\n");
            playerVD = playerVD - 10;
            
          }
          

    } while (goblinsVD > 0 && playerVD > 0);

    if (playerVD <= 0){

    printf("\nInfelizmente os Goblins foram muito fortes e mais rapidos,\n");
    printf("e voce acabou nao conseguindo vencelos, ele acabaram com\n");
    printf("voce e levaram o sua faca e alguns trocados que\n");
    printf("voce tinha...\n");
    printf("VOCE MORREU...");

    } 

    if (goblinsVD <= 0){
       printf("\nVoce consegui eleminar os 3 goblins com sucesso,\n");
    printf("diante de voce eles deixam as sacolas de objetos roubados\n");
    printf("ao abrir e ver o que tem dentro voce ve que as tres estao\n");
    printf("cheias de ouro e joias. Satisfeito com sua vitoria, voce\n");
    printf("decide seguir em frente saindo da floresta e chegando\n");
    printf("ate um vilarejo, onde se acomoda por algum tempo.\n");
    printf("terminando assim vitorioso e com muito dinheiro\n");
    printf("FIM DE JOGO, VOCE VENCEU...");
    }
    

}
