#include <stdio.h>

void sum(int *a, int *b, int *sum) {
    *sum = *a+*b;
}

int main() {

    int a, b, Sum;
    scanf("%d %d", &a, &b);
    
    sum(&a, &b, &Sum);

    printf("Sum of a & b = %d\n", Sum);

    return 0;

}