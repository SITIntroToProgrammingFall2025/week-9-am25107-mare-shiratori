#include <stdio.h>

int main(void){
    int R, G, B, num;
    char a[6];
    int i;
    char hex[] = "0123456789ABCDEF";
    scanf("%d", &R); scanf("%d", &G); scanf("%d", &B);
    int rgb[3] = {R, G, B};

    int colors[5][3] = {
        {0, 0, 0},
        {255, 0, 0},
        {0, 255, 0},
        {0, 0, 255},
        {255, 255, 255}};
    char *names[5] = {"Black", "Red", "Green", "Blue", "White"};
    int min = 0;
    long kari = 1L << 60;
    for (i=0; i<5; i++){
        long r = R - colors[i][0];
        long g = G - colors[i][1];
        long b = B - colors[i][2];
        long kyori = r*r + g*g + b*b;

        if (kyori < kari) {
            kari = kyori;
            min = i;
        }
    }

    printf("The nearest color is %s\n", names[min]);

    return 0;
}


