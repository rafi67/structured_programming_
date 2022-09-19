#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    scanf("%s", str);

    int size = strlen(str), palindrome = 1;

    for(int i=size-1, j=0; i>=0; --i, j++) {
        if(str[j]!=str[i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }

    return 0;

}