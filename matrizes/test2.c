#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

void matrixGen(int Lines, int Coll, char Matrix[Lines][Coll][10]){ // Assuming each element can hold up to 10 characters
    for (int i = 0; i < Lines; i++) {
        for (int j = 0; j < Coll; j++) {
            strcpy(Matrix[i][j], "...."); // Initialize each element with a string of dots
        }
    }
}

int main() {
    int Lines = 8;
    int Coll = 8;
    char Matrix[Lines][Coll][10]; // Three-dimensional array for strings
    
    matrixGen(Lines, Coll, Matrix); // Pass the Matrix array to the function
    
    // Modify elements of the matrix
    strcpy(Matrix[6][0], ">>"); // Modify the starting point with a string
    
    // Print the matrix
    printf("Modified Matrix:\n");
    for (int i = 0; i < Lines; i++) {
        for (int j = 0; j < Coll; j++) {
            printf("%s ", Matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void matrixGen(int Lines, int Coll, char Matrix[Lines][Coll][10]) {
    
