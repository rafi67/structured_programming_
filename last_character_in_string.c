#include <stdio.h>

int main() {

    char str[50] = "axc axb cxa";

    int j = 0, i;

    while(str[j]!='\0') 
        ++j;

    for(int i=j; i>=0; --i) {
        if(str[i]=='\0' || str[i]==' ') printf("%c", str[i-1]-32);
    }

    return 0;

}