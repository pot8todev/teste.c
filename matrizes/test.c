#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include <time.h>

void matrixGen(int Lines, int Coll, char Matrix[Lines][Coll][10]){
    for(int i = 0; i < Lines; i++){
        for(int j=0 ; j < Coll; j++){
            strcpy(Matrix[i][j], "...");
        }
    }
    strcpy(Matrix[6][0], ">>");// starting point
}

void Food(int SnkTreat[], int Coll){// sao geradas as coordenadas da comida
    srand(time(NULL));// usando o relogio do computador para gerar uma aleatoria maior para Rand().
    
    for(int a = 0; a<2; a++){
        SnkTreat[a] = (rand() %Coll) ;  
       
    }
// here ill need to check if the food will spawn in a apropiate tile

}

int main(){
    int Lines=10;
    int Coll=10;
    char Matrix[Lines][Coll][10];/* declarando o espaço de memoria destinado para uma matriz linesxcoll,
    ela tera 3 dimensoes, entao usaremos strcpy para ajudar a adicionar str's*/
    matrixGen(Lines, Coll, Matrix);// recheamos ela com str unidimensionais e setamos nosso posnto inicial

// preparamos o array para receber as 2 coordenadas da comida.
    int SnkTreat[2]; 
    Food(SnkTreat, Coll);
    strcpy(Matrix[SnkTreat[0]][SnkTreat[1]], "@@");
    /*printf("%d,%d",SnkTreat[0],SnkTreat[1]);  coordenadas da comida, sao adicionadas na nossa matriz*/


        //now, with the matrix generated, we gonna print it
    for(int i = 0; i<Coll; i++){
        for(int j=0 ; j<Lines; j++){
            printf("%s", Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}