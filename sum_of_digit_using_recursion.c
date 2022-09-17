#include <stdio.h>

int sum(int n, int n2) {
    if(n==0) return n2;
    n2 += n%10;
    n/=10;
    return sum(n, n2);
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n, 0));

    return 0;

}