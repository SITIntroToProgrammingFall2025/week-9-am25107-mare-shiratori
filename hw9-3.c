#include <stdio.h>

int main(void){
    int a[2][3];
    int b[3][2];
    int i, j, k;

    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            scanf("%d", &a[i][j]);}}
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
            scanf("%d", &b[i][j]);}}
        
    printf("The first matrix you entered is\n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("%d ", a[i][j]);}
        printf("\n");}

    printf("The second matrix you entered is\n");
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
            printf("%d ", b[i][j]);}
        printf("\n");}

    printf("The multiplication product of matrix A and matrix B:\n");
    int ans[2][2];
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            ans[i][j] = 0;
            for (k=0; k<3; k++){
                ans[i][j] += a[i][k] * b[k][j];}}}

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf("%d ", ans[i][j]);}
        printf("\n");}

    return 0;
}
