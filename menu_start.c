#include <stdio.h>

// Protótipos de funções
int startMenu();
void inicio();
void floresta02();
void penhasco();
void dungeon_in();
void encontro_goblin();
void luta_goblin();

int startMenu() {
  int start;

  printf("Bem-vindo ao nosso RPG de Terminal de Comando!\n");
  printf("Selecione uma das alternativas para iniciar o jogo:\n");
  printf("1 - START\n");
  printf("2 - SAIR\n");
  printf("---> ");
  scanf("%d", &start);

  switch (start) {
  case 1:
    printf("Jogo iniciado!\n");
    printf("\nVoce e um aventureiro que vaga por uma floresta.\n");
    printf("Sua bussola parece estranha e seu mapa rasgou.\n");
    printf("Diante de arvores enormes e sombras estranhas,\n");
    printf("voce sente que nao esta sozinho...\n");
    break;

  case 2:
    printf("Saindo...\n");
    return 0;

  default:
    printf("Opcao invalida!\n");
    return startMenu();
  }

  return 1;
}

void inicio() {
  int op_inicial = 0;

  while (op_inicial < 1 || op_inicial > 4) {
    printf("O que deseja fazer?\n");
    printf(" 1 - SEGUIR EM FRENTE\n");
    printf(" 2 - SEGUIR A DIREITA\n");
    printf(" 3 - SEGUIR A ESQUERDA\n");
    printf(" 4 - VOLTAR PARA TRAS\n");
    printf(" 5 - OLHAR EM VOLTA\n");
    printf("---> ");
    scanf("%d", &op_inicial);

    if (op_inicial == 5) {
      printf("\nVoce nota que as arvores a sua volta sao uma especie de "
             "pinheiros\n");
      printf(
          "com copas altas, que tampam a chegada da luz solar ate o solo,\n");
      printf("atras de voce percebe-se um declinio no solo, algo como um "
             "penhasco\n");
      op_inicial = 0;
    } else if (op_inicial < 1 || op_inicial > 5) {
      printf("\nOpcao invalida, tente novamente.\n");
      op_inicial = 0;
    }
  }

  switch (op_inicial) {
  case 1:
    printf("\nVoce decide seguir em frente, encarando o desconhecido...\n");
    floresta02();
    break;

  case 2:
    printf("\nVoce optou por seguir a sua direita...\n");
    break;

  case 3:
    printf("\nVoce optou por seguir a sua esquerda...\n");
    break;

  case 4:
    printf("\nVoce decide voltar, mas algo parece diferente no caminho...\n");
    penhasco();
    break;
  }
}

void floresta02() {
  int op_floresta02 = 0;

  while (op_floresta02 < 1 || op_floresta02 > 3) {
    printf("O que deseja fazer?\n");
    printf(" 1 - SEGUIR EM FRENTE\n");
    printf(" 2 - VOLTAR\n");
    printf(" 3 - OLHAR EM VOLTA\n");
    printf("---> ");
    scanf("%d", &op_floresta02);

    if (op_floresta02 == 3) {
      printf("\nCada arvore parece identica a outra.\n");
      printf("Essa floresta parecia interminavel.\n");
      printf("O vento frio dizia que havia algo a frente...\n");
      op_floresta02 = 0; // volta a pedir a opção
    } else if (op_floresta02 < 1 || op_floresta02 > 3) {
      printf("\nOpcao invalida, tente novamente.\n");
    }
  }

  switch (op_floresta02) {
  case 1:
    printf("\nVoce continua andando sem parar...\n");
    dungeon_in();
    break;

  case 2:
    printf("\nVoce retorna ao inicio.\n");
    inicio();
    break;
  }
}

void penhasco() {
  printf("\nVoce caminha sem parar e sem notar para onde esta indo,\n");
  printf("voce tropeca numa pedra e desliza em um penhasco,\n");
  printf("voce ate tenta se segurar em algumas raizes finas mas\n");
  printf("elas acabam se rompendo, parece que nao foi dessa vez.\n");
  printf("VOCE MORREU...\n");
}

void dungeon_in() {
  int op_dungeon_in = 0;

  while (op_dungeon_in < 1 || op_dungeon_in > 3) {
    printf("O que deseja fazer?\n");
    printf(" 1 - SEGUIR PELO ARCO DE ROCHAS E VINHAS\n");
    printf(" 2 - VOLTAR\n");
    printf(" 3 - OLHAR EM VOLTA\n");
    printf("---> ");

    scanf("%d", &op_dungeon_in);

    if (op_dungeon_in == 3) {
      printf(
          "\nO solo declina em uma pequena clareira, com arvores menores.\n");
      printf("Entre pedras empilhadas formando pilares, um arco coberto de "
             "vinhas\n");
      printf("se ergue, como um portao antigo consumido pelo tempo e pela "
             "natureza.\n");
      printf("Algo nele parece convidar voce a entrar...\n");
      op_dungeon_in = 0;
    } else if (op_dungeon_in < 1 || op_dungeon_in > 3) {
      printf("\nOpcao invalida, tente novamente.\n");
    }
  }

  switch (op_dungeon_in) {
  case 1:
    printf("\nVoce adentra a construcao rochosa...\n");
    encontro_goblin();
    break;

  case 2:
    printf("\nVoce retorna pelo caminho que estava fazendo...\n");
    floresta02();
    break;
  }
}

void encontro_goblin() {
  int encontro_gb;

  printf("\nVoce passa pelo portao e diante dos arbustos surgem 3 Goblins.\n");
  printf(
      "Armados com lancas velhas e enferrujadas, eles riem de forma cruel,\n");
  printf(
      "mostrando bolsas cheias de objetos roubados, sem notar sua presenca.\n");
  printf("O que deseja fazer?\n");
  printf(" 1 - LUTAR\n");
  printf(" 2 - FUGIR\n");
  printf("---> ");

  scanf("%d", &encontro_gb);

  switch (encontro_gb) {
  case 1:
    printf("\nVoce lembra que tem uma faca em seu bolso e se prepara para "
           "lutar...\n");
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

void luta_goblin() {
  int goblinsVD = 100;
  int playerVD = 100;
  int jogadaATT;

  do {
    printf("\nVIDA DOS GOBLINS: %d\n", goblinsVD);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\nSUA VIDA: %d\n", playerVD);
    printf("1 - ATACAR COM A FACA\n");
    printf("2 - FUGIR\n");
    scanf("%d", &jogadaATT);

    if (jogadaATT == 1) {

      printf("\nVoce desfere um ataque contra os goblins\n que causa 20 pontos "
             "de dano...\n");
      goblinsVD = goblinsVD - 20;

    } else if (jogadaATT == 2) {

      playerVD = playerVD - 100;

    } else {

      printf("\nOpcao invalida, tente novamente.\n");
      scanf("%d", &jogadaATT);
    }

    if (goblinsVD >= 70) {

      printf("\nOs Goblins revidam o seu ataque, causando 30 pontos de dano em "
             "voce...\n");
      playerVD = playerVD - 30;

    } else if (goblinsVD >= 30) {

      printf("\nOs dois goblins restantes te atacam, causando 20 pontos de "
             "dano em voce...\n");
      playerVD = playerVD - 20;

    } else if (goblinsVD >= 1) {

      printf("\nO ultimo dos goblins te ataca, causando 10 pontos de dano em "
             "voce...\n");
      playerVD = playerVD - 10;
    }

  } while (goblinsVD > 0 && playerVD > 0);

  if (playerVD <= 0) {

    printf("\nInfelizmente os Goblins foram muito fortes e mais rapidos,\n");
    printf("e voce acabou nao conseguindo vencelos, ele acabaram com\n");
    printf("voce e levaram o seu canivete e alguns trocados que\n");
    printf("voce tinha...\n");
    printf("VOCE MORREU...");
  }

  if (goblinsVD <= 0) {
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

int main() {
  int status = startMenu();

  if (status == 0) {
    return 0;
  }

  inicio();

  return 0;
}