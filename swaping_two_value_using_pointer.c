#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    printf("Before swaping a & b:\n");
    
    printf("a = %d & b = %d\n", a, b);

    swap(&a, &b);

    printf("After swaping a & b:\n");

    printf("a = %d & b = %d\n", a, b);

    return 0;

}