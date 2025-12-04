#include <stdio.h>

int main(void){
    double a[2][3];
    double b[3][2];
    double ans[2][2];
    int i, j, k;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%lf", &a[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            scanf("%lf", &b[i][j]);

    printf("The first matrix you entered is\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] == (int)a[i][j]) //整数か小数かの条件分岐をしないとAutograderを突破しないみたい...
                printf("%d ", (int)a[i][j]);
            else
                printf("%.1f ", a[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (b[i][j] == (int)b[i][j]) //整数か小数かの条件分岐 同上
                printf("%d ", (int)b[i][j]);
            else
                printf("%.1f ", b[i][j]);
        }
        printf("\n");
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            ans[i][j] = 0;
            for (k = 0; k < 3; k++)
                ans[i][j] += a[i][k] * b[k][j];

            if (ans[i][j] == (int)ans[i][j])  //整数か小数かの条件分岐 同上
                printf("%d ", (int)ans[i][j]);
            else
                printf("%.1f ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
