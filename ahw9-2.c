#include <stdio.h>

int main(void){
    int a[5];
    int i, n=5;
    printf("sorted array:\n"); //『printf("Input array:\n");』でない
    for (i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    for (int i=0; i < n-1; i++) {
        for (int j=0; j < n-1-i; j++) {
            if (a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }}}
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
