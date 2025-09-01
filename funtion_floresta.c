#include<stdio.h>

int main(){

    int caminho_floresta;

    printf("Voce e um aventureiro que vaga por uma floresta, no entanto sua bussola parece estranha e seu mapa acabou rasgando\n, diante de arvores grandes e sombras estranhas voce sente que nao esta sozinho e precisa sair dai...\n");
    printf(" 1- SEGUIR EM FRENTE \n 2- VOLTAR \n");


    scanf("%d", &caminho_floresta);

    switch(caminho_floresta){
        case 1:
        printf("voce decide seguir seu rumo a dentro da floresta, cada passo galhos rangiam sob seus pes\n e a floresta parecia se fechar envolta de voce, e um silecio tao profundo que voce podia ouvir sua propria respiracao,1\n mas voce segue em frente");
        break;

        case 2:

        break;

        default:
        break;
    }
}

