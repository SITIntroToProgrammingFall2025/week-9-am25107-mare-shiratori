#include <stdio.h>

int main(void){
    int R, G, B, num;
    char a[6];
    int i;
    char hex[] = "0123456789ABCDEF";
    scanf("%d", &R); scanf("%d", &G); scanf("%d", &B);
    int rgb[3] = {R, G, B};
    for (i=0; i<3; i++){
        a[i*2] = hex[rgb[i] / 16];
        a[i*2+1] = hex[rgb[i] % 16];
    }
    printf("The hex code is #%c%c%c%c%c%c\n",
           a[0], a[1], a[2], a[3], a[4], a[5]);
    return 0;
}
