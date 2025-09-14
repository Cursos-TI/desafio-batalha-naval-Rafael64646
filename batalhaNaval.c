#include <stdio.h>

int main(){
    //tabuleiro
    int tabela[10][10]={0};
    int coluna[10]={1,2,3,4,5,6,7,8,9,10};
    char tabuleiro[10]={'A','B','C','D','E','F','G','H','I','J'};
    int tabelaD[10][10];


//aqui posso alterar as formas geometricas com linha e coluna sem ter que mexer no cod
// Pontos de origem das habilidades no tabuleiro
int origemOctaedro[2] = {3, 1};      // linha, coluna
int origemCruz[2] = {8, 2};
int origemCone[2] = {1, 5};


//primeiro barco
tabela[1][2]=3;
tabela[1][1]=3;
tabela[1][3]=3;

//segundo barco
tabela[8][8]=3;
tabela[7][8]=3;
tabela[6][8]=3;


//barco 1 na diagonal,e o barco 2 na diagonal tmb
for (int i = 3; i < 6; i++) {
        tabela[i][i] = 3;
         for (int j = 9 , k = 1; j > 6 && k < 4; j-- , k++){
            tabela[k][j] = 3;
    }
    }


        //habilidades octaedro
int octaedro[3][5] =  {
    {0,0,1,0,0},
    {0,1,1,1,0},
    {0,0,1,0,0}

};

//habilidades cruz
int cruz[3][5] = {
    {0,0,1,0,0},
    {1,1,1,1,1},
    {0,0,1,0,0}
};
//habilidade cone
int cone[3][5] = {
    {0,0,1,0,0},
    {0,1,1,1,0},
    {1,1,1,1,1}
};



for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
        int li, co;
          // Octaedro
        li = origemOctaedro[0] + i - 1; //verticalmente
        co = origemOctaedro[1] + j - 2; //horizontalmente
        if(li>=0 && li<10 && co>=0 && co<10 && octaedro[i][j]==1){
            if(tabela[li][co]==0) tabela[li][co] = 4; // 4 = octaedro
        }

        // Cruz
        li = origemCruz[0] + i - 1;
        co = origemCruz[1] + j - 2;
        if(li>=0 && li<10 && co>=0 && co<10 && cruz[i][j]==1){
            if(tabela[li][co]==0) tabela[li][co] = 5; // 5 = cruz
        }

        // Cone
        li = origemCone[0] + i - 1;
        co = origemCone[1] + j - 2;
        if(li>=0 && li<10 && co>=0 && co<10 && cone[i][j]==1){
            if(tabela[li][co]==0) tabela[li][co] = 6; // 6 = cone
        }
    }
}


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
       for  (int j = 0; j < 10; j++) {
            printf(" %d ", tabela[i][j]); 
        }
        printf("\n");
    }



    return 0;
}