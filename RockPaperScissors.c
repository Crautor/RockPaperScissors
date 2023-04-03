//Signed By Vitor Dallanol
#include <stdio.h>
int main(){
int escolha=0, escolhaCPU=0;
// codigo para randomizar
srand(time(NULL));
escolhaCPU=rand()%3;
// utilizado para ver se os numeros era realmente aleatorios
// for (int i = 0; i < 10 i++)
// {
// escolhaCPU=rand()%3;
// printf("escolhaCPU=%d\n",escolhaCPU);
// }
printf("ESCOLHA UMA DAS 3 OPCOES:\n");
printf("0 - Pedra\n");
printf("1 - Papel\n");
printf("2 - Tesoura\n");

scanf("%d",&escolha);
switch (escolha)
{
case 0:
    if (escolhaCPU == 0){
        printf("Escolha do usuario = Pedra \nEscolha do CPU = Pedra \nResultado = Empate");
    }
    else if (escolhaCPU == 1){
        printf("Escolha do usuario = Pedra\nEscolha do CPU = Papel \nResultado = CPU Venceu");
    }
    else if (escolhaCPU == 2){
        printf("Escolha do usuario = Pedra\nEscolha do CPU = Tesoura \nResultado = Usuario Venceu");
    }
    break;
case 1:

    if (escolhaCPU == 0){
        printf("Escolha do usuario = Papel\nEscolha do CPU = Pedra \nResultado = Usuario Venceu");
    }
    else if (escolhaCPU == 1){
        printf("Escolha do usuario = Papel\nEscolha do CPU = Papel \nResultado = Empate");
    }
    else if (escolhaCPU == 2){
        printf("Escolha do usuario = Papel\nEscolha do CPU = Tesoura \nResultado = CPU Venceu");
    }
    break;
case 2:
    
    if (escolhaCPU == 0){
        printf("Escolha do usuario = Tesoura\nEscolha do CPU = Pedra \nResultado = CPU Venceu");
    }
    else if (escolhaCPU == 1){
        printf("Escolha do usuario = Tesoura\nEscolha do CPU = Papel \nResultado = Usuario Venceu");
    }
    else if (escolhaCPU == 2){
        printf("Escolha do usuario = Tesoura\nEscolha do CPU = Tesoura \nResultado = Empate");
    }
    break;
default:
    printf("ESCOLHA INVALIDA!!!");
    break;
}
}
