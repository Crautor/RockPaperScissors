//Signed By Vitor Dallanol
#include <stdio.h>
#include <stdlib.h>
int main(){
int escolha=0, escolhaCPU=0, pontosCPU=0, pontosUSER=0,loop=0;
// codigo para randomizar
do{
    srand(time(NULL));
    escolhaCPU=rand()%3;
    // utilizado para ver se os numeros era realmente aleatorios
    // for (int i = 0; i < 10 i++)
    // {
    // escolhaCPU=rand()%3;
    // printf("escolhaCPU=%d\n",escolhaCPU);
    // }
    printf("\nMENU\n");
    printf("\n=====================================\n");
    printf("ESCOLHA UMA DAS 3 OPCOES:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    printf("=====================================\n");

    scanf("%d",&escolha);
    system("cls");
    switch (escolha)
    {
    case 0:
        if (escolhaCPU == 0){
            printf("\nRESULTADO\n");
            printf("\n=====================================\n");
            printf("Escolha do Usuario = Pedra \nEscolha do CPU = Pedra \nResultado = Empate\n");
            printf("=====================================\n");
            printf("\nPLACAR\n");
            printf("\n=====================================\n");
            printf("Usuario: %d Pontos\nCPU: %d pontos\n",pontosUSER,pontosCPU);
            printf("=====================================\n");
        }
        else if (escolhaCPU == 1){
            printf("\nRESULTADO\n");
            printf("\n=====================================\n");
            printf("Escolha do Usuario = Pedra\nEscolha do CPU = Papel \nResultado = CPU Venceu\n");
            pontosCPU++;
            printf("=====================================\n");
            printf("\nPLACAR\n");
            printf("\n=====================================\n");
            printf("Usuario: %d Pontos\nCPU: %d pontos\n",pontosUSER,pontosCPU);
            printf("=====================================\n");
        }
        else if (escolhaCPU == 2){
            printf("\nRESULTADO\n");
            printf("\n=====================================\n");
            printf("Escolha do Usuario = Pedra\nEscolha do CPU = Tesoura \nResultado = Usuario Venceu\n");
            pontosUSER++;
            printf("=====================================\n");
            printf("\nPLACAR\n");
            printf("\n=====================================\n");
            printf("Usuario: %d Pontos\nCPU: %d pontos\n",pontosUSER,pontosCPU);
            printf("=====================================\n");
        }
        break;
    case 1:

        if (escolhaCPU == 0){
            printf("\nRESULTADO\n");
            printf("\n=====================================\n");
            printf("Escolha do Usuario = Papel\nEscolha do CPU = Pedra \nResultado = Usuario Venceu\n");
            pontosUSER++;
            printf("=====================================\n");
            printf("\nPLACAR\n");
            printf("\n=====================================\n");
            printf("Usuario: %d Pontos\nCPU: %d pontos\n",pontosUSER,pontosCPU);
            printf("=====================================\n");
        }
        else if (escolhaCPU == 1){
            printf("\nRESULTADO\n");
            printf("\n=====================================\n");
            printf("Escolha do Usuario = Papel\nEscolha do CPU = Papel \nResultado = Empate\n");
            printf("=====================================\n");
            printf("\nPLACAR\n");
            printf("\n=====================================\n");
            printf("Usuario: %d Pontos\nCPU: %d pontos\n",pontosUSER,pontosCPU);
            printf("=====================================\n");
        }
        else if (escolhaCPU == 2){
            printf("\nRESULTADO\n");
            printf("\n=====================================\n");
            printf("Escolha do Usuario = Papel\nEscolha do CPU = Tesoura \nResultado = CPU Venceu\n");
            pontosCPU++;
            printf("=====================================\n");
            printf("\nPLACAR\n");
            printf("\n=====================================\n");
            printf("Usuario: %d Pontos\nCPU: %d pontos\n",pontosUSER,pontosCPU);
            printf("=====================================\n");
        }
        break;
    case 2:
        
        if (escolhaCPU == 0){
            printf("\nRESULTADO\n");
            printf("\n=====================================\n");
            printf("Escolha do Usuario = Tesoura\nEscolha do CPU = Pedra \nResultado = CPU Venceu\n");
            pontosCPU++;
            printf("=====================================\n");
            printf("\nPLACAR\n");
            printf("\n=====================================\n");
            printf("Usuario: %d Pontos\nCPU: %d pontos\n",pontosUSER,pontosCPU);
            printf("=====================================\n");
        }
        else if (escolhaCPU == 1){
            printf("\nRESULTADO\n");
            printf("\n=====================================\n");
            printf("Escolha do Usuario = Tesoura\nEscolha do CPU = Papel \nResultado = Usuario Venceu\n");
            pontosUSER++;
            printf("=====================================\n");
            printf("\nPLACAR\n");
            printf("\n=====================================\n");
            printf("Usuario: %d Pontos\nCPU: %d pontos\n",pontosUSER,pontosCPU);
            printf("=====================================\n");
        }
        else if (escolhaCPU == 2){
            printf("\nRESULTADO\n");
            printf("\n=====================================\n");
            printf("Escolha do Usuario = Tesoura\nEscolha do CPU = Tesoura \nResultado = Empate\n");
            printf("=====================================\n");
            printf("\nPLACAR\n");
            printf("\n=====================================\n");
            printf("Usuario: %d Pontos\nCPU: %d pontos\n",pontosUSER,pontosCPU);
            printf("=====================================\n");
        }
        break;
    default:
        printf("ESCOLHA INVALIDA!!!\n");
        break;
            
    }
} while (loop==0);
}