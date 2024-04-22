#include <stdio.h>

void swap(int v1 , int v2){

    int t = v1;
    v1 = v2; //a == b != t 
    v2 = t;//a != b
    printf("agora: a= %d, b= %d\n", v1, v2 );
     static int count = 0;
    if (count == 1)
    {
        puts("agr mudou");
        count++;
    }


}
void coordenates(int *pv1,int *pv2 ){//denotados ponteiros de a e b, que sao inteiros, no caso:  -1250449988, -1250449992
    int t= *pv2;
    *pv2 = *pv1;
    *pv1 = t;
    static int count = 0;
    if (count == 1)
    {
        puts("agr mudou");
        count++;
    }

}
int main(){
    int a = 19;
    int b = 73;


    printf("a= %d, b= %d\n", a, b);
    swap( a,  b);
    printf("a= %d,  b= %d\n", a, b);
    coordenates(&a,&b);
    printf("a= %d, b= %d\n", a, b);
    printf("a= %d, b= %d\n", a, b);
    return 0;
 
}


