#include <stdio.h>

int main(void){
    int a[2][2];
    int i, j;
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            scanf("%d", &a[i][j]);}}
    printf("You entered\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    double ans = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    printf("Determinant is %f\n", ans);
    return 0;
}
