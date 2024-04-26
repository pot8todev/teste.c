#include<stdio.h>
#include<string.h>


int len(char str[]){// quando ele recebe um char de n elementos, ou seja, um array de letras== str, verifique o numero de elementos

    int  length = 0;
        while (str[length] != '\0')// ele verifica se chegou ao final do código
        {
            length++;// se nao estiver no final, verifique o proximo elemento do array str
        }


    return length;
}

void copy(char* strFr, char* strTo){
    int count=0;

    while(strFr[count]!= '\0'){

        strTo[count]=strFr[count];

        count++;

    }
    strTo[count]='\0' ;
    printf("%s\n",strTo);

}


int main(){

    char* str1 = "hello world";// world é um ponteiro que aponta parao primeiro byte da string, 
    printf("%s\n",str1);//%s, esse comando indica que"hello world deve serlido ate que pritf retorne 0, ou seja um valor nulo"
   
    char str2[] = "hello world";
    //printf("%d\n", len(str2));

    char str3[len(str2)];



    copy(str2,str3);
    return 0;

}