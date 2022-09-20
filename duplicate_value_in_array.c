#include <stdio.h>

void duplicate(int *a, int n) {
    int a2[1000];
    for(int i=0; i<1000; ++i) a2[i] = 0;

    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            if(a[i]==a[j]) {
                int index = a[i];
                a2[index] = a[i];
            }
        }
    }

    for(int i=0; i<1000; ++i) {
        if(a2[i]!=0) printf("%d ", a2[i]);
    }
    printf("\n");
}

int main() {

    int n, count = 0;

    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    duplicate(a, n);

    return 0;

}