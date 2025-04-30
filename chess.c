#include <stdio.h>
//Processo para movimento da torre
void torre(int n){
    if(n>0){
        printf("Direita\n");
        torre(n-1);
    }
}
//Processo para movimento do bispo
void bispo(int n){
    if(n>0){
        for(int i = 0; i<1; i++){
            printf("Cima\n");
            for(int j = 0; j<1; j++){
                printf("Direita\n");
            }
        }
        bispo(n-1);
    }
}
//Processo para movimento da rainha
void rainha(int n){
    if(n>0){
        printf("Esquerda\n");
        rainha(n-1);
    }
}

int main(){
    char escolha;
    //Mostra as opções
    do
    {
        printf("Escolha a peça:\n");
        printf("Torre: Digite 1\nBispo: Digite 2\nRainha: Digite 3\nCavalo: Digite 4\nSair: Digite 5\n");
        scanf("%c", &escolha);
        getchar();
        switch (escolha)
        {
        case '1':
            torre(5);
            break;
        case '2':
            bispo(5);
            break;
        case '3':
            rainha(8);
            break;
        case '4':
            //Utiliza loops aninhados para a movimentaçao do cavalo
            for(int i = 0; i<=2; i++){
                while(i<2){
                    printf("Cima\n");
                    break;
                }
                if(i==2){
                    printf("Direita\n");
                }
            }
            break;
        case '5':
            break;
        default:
            printf("Opção inválida\n");
            break;
        }

    } while (escolha!='5'); //Escolha '5' fecha o menu

    return 0;
}