#include <stdio.h>

void pair(int *a1, int t1, int n) {
    int a3 = 0, a4 = 0;
    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            if((a1[i]+a1[j])==t1 && a1[i]!=a1[j]) {
                a3 = a1[i], a4 = a1[j];
                break;
            }
        }
    } 
    
    if(a3 && a4) {
        printf("Pair found (%d, %d)\n", a3, a4);
    }
    else {
        printf("Pair not found\n");
    }
}

int main() {

    int a1[] = {8, 7, 2, 5, 4, 1}, target1 = 10,
    a2[] = {5, 6, 8, 1, 9}, target2 = 12, a3 = 0, a4 = 0;

    pair(a1, target1, 6);
    pair(a2, target2, 5);

    return 0;

}