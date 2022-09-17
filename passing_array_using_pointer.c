#include <stdio.h>

void Print(int *a, int size) {
    for(int i=0; i<size; ++i) printf("%d ", a[i]);
    printf("\n");
}

int main() {

    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    Print(a, n);

    return 0;

}