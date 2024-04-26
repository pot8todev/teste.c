#include<stdio.h>


void FinalCountdown(int* pa){//pa é declarado como um int*, ou seja, um ponteiro pa

    static int count= 0;
    count ++;
    *pa= count;//* é um operador, e se refere ao objeto contido em pa, que recebe o int 0
    printf("%d, %p\n", count, pa);

}



int main(){
    int a=10;
    FinalCountdown(&a);
    printf("%d\n", a);
    
    return 0;
}