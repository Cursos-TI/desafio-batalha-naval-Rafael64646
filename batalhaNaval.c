#include <stdio.h>
int main(){
    int tabela[10][10]={0};
    int coluna[10]={1,2,3,4,5,6,7,8,9,10};
    char tabuleiro[10]={'A','B','C','D','E','F','G','H','I','J'};

//primeiro barco
tabela[1][2]=3;
tabela[1][1]=3;
tabela[1][3]=3;

//segundo barco
tabela[8][8]=3;
tabela[7][8]=3;
tabela[6][8]=3;

//letras
printf("   ");
    for (int i = 0; i < 10; i++)
    {
       
       printf(" %c ",tabuleiro[i]);  
    }
    printf("\n");
 
//o numero 3 representa o navio
//tabela de 0(agua) e a coluna de numeros
for (int i = 0; i < 10; i++) {
        printf("%2d ", coluna[i]); 
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabela[i][j]); 
        }
        printf("\n");
    }

    return 0;
}