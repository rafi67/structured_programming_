#include <stdio.h>

int second_max(int *a, int size) {
    int max1 = a[0], max2;
    for(int i=0; i<size; i++) {
        if(max1<a[i]) {
            max2 = max1;
            max1 = a[i];
        }
        else if(max2<a[i] && a[i]<max1) max2 = a[i];
    }
    return max2;
}

int main() {

    int n;
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    printf("%d\n", second_max(a, n));

    return 0;

}