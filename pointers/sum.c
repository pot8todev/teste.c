#include<stdio.h>
#include<stdlib.h>

void sum(int a, int b, int *pa){

    printf("%d, %d\n", a, *pa);
    a = a + b;
     
    printf("%d, %d \n", a, *pa);// here im asking to print the int value INSIDE the addres *pa, 10

}

int main(){
    int a, b;
    a= 10;
    b= 13;
    sum(a, b, &a);
    printf("%p\n", &a);// her im printing the addres of the pointer itself.
    return 0;
}