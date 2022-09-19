#include <stdio.h>

int main() {


    char string[100];

    gets(string); 

    printf("%c ", 
        (string[0]>='A' && string[0]<='Z')?string[0]+32:string[0]);

    int i = 1;

    while(string[i]!='\0') {
        if(string[i]==' ' && string[i+1]!=' ') printf("%c ", 
        (string[i+1]>='A' && string[i+1]<='Z')?string[i+1]+32:string[i+1]);
        ++i;
    }

    return 0;

}