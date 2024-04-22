# include<stdio.h>
#include<stdlib.h>


void increment(){

    static  int counter = 0;

    counter++;
    printf("%d \n", counter);
    
}

int main(){
    int i;

    for(i = 2 ; i < 10; i++) {

        int counter = 0;
        increment();
    }
    return 0;

}