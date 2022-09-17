#include <stdio.h>

void reverse(int n) {
    if(n==0) return;
    int n2;
    n2 = n%10;
    printf("%d", n2);
    n/=10;
    reverse(n);
}

int main() {

    int n;
    scanf("%d", &n);

    reverse(n);

    return 0;

}