#include <stdio.h>
#include <./funtionGoblin.c>

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

    switch(start) {
        case 1:
            printf("Jogo iniciado!\n");
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
    int op_inicial;

    printf("\nVoce e um aventureiro que vaga por uma floresta.\n");
    printf("Sua bussola parece estranha e seu mapa rasgou.\n");
    printf("Diante de arvores enormes e sombras estranhas,\n");
    printf("voce sente que nao esta sozinho...\n");
    printf("O que deseja fazer?\n");
    printf(" 1 - SEGUIR EM FRENTE\n");
    printf(" 2 - VOLTAR\n");
    printf("---> ");
    scanf("%d", &op_inicial);

    switch(op_inicial) {
        case 1:
            printf("\nVoce decide seguir em frente, encarando o desconhecido...\n");
            floresta02();
            break;

        case 2:
            printf("\nVoce decide voltar, mas algo parece diferente no caminho...\n");
            penhasco();
            break;

        default:
            printf("\nOpcao invalida, tente novamente.\n");
            inicio(); 
            break;
    }
}

void floresta02() {
    int op_floresta02;

    printf("\nSem olhar para tras voce segue em frente.\n");
    printf("Cada arvore parece identica a outra.\n");
    printf("Essa floresta parecia interminavel.\n");
    printf("O vento frio dizia que havia algo a frente...\n");
    printf("O que deseja fazer?\n");
    printf(" 1 - SEGUIR EM FRENTE\n");
    printf(" 2 - VOLTAR\n");
    printf("---> ");

    scanf("%d", &op_floresta02);

    switch (op_floresta02) {
        case 1:
            printf("\nVoce continua andando sem parar...\n");
            dungeon_in();
            break;

        case 2:
            printf("\nVoce retorna ao inicio.\n");
            inicio();
            break;

        default:
            printf("\nOpcao invalida, tente novamente.\n");
            floresta02();
            break;
    }
}

void penhasco(){
    printf("\nVoce caminha sem parar e sem notar para onde esta indo,\n");
    printf("voce tropeca numa pedra e desliza em um penhasco,\n");
    printf("voce ate tenta se segurar em algumas raizes finas mas\n");
    printf("elas acabam se rompendo, parece que nao foi dessa vez.\n");
    printf("VOCE MORREU...\n");
}



int main() {
    int status = startMenu();

    if (status == 0) {
        return 0;
    }

    inicio();

    return 0;
}
