#include <stdio.h>

int main() {

    int n, count = 0;

    scanf("%d", &n);

    int a[n], a2[n];

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    for(int i=0; i<n-1; ++i) {
        for(int j=i+1; j<n; ++j) {
            if(a[i]==a[j]) {
                a2[i] = 1;
                a2[j] = 1;
            }
        }
    }

    for(int i=0; i<n; ++i) if(a2[i]!=1) ++count; 

    printf("Number of unique value is %d\n", count);

    return 0;

}