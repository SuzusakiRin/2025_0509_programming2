#include <stdio.h>
#include <stdlib.h>
#include "ex.h"

int ex2(){
    int a, b;
    printf("Size[N][] = ");
    scanf("%d", &a);
    printf("list[][M] = ");
    scanf("%d", &b);
    int **list = calloc(a, sizeof(int*));
    for (int i = 0; i < a; i++) {
        list[i] = calloc(b, sizeof(int));
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &list[i][j]);
        }
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    int *sumA = calloc(a, sizeof(int*));
    int *sumB = calloc(b, sizeof(int*));
    for (int i = 0; i <  a; i++) {
        for(int j = 0; j < b; j++) {
            sumA[i] += list[i][j];
        }
        printf("%ds–Ú‚Ì˜a = %d", i, sumA[i]);
        printf("\n");
    }
    for (int i = 0; i < b; i++) {
        for(int j = 0; j < a; j++) {
            sumB[i] += list[j][i];
        }
        printf("%d—ñ–Ú‚Ì˜a = %d",i, sumB[i]);
        printf("\n");
    }

    int max = sumA[0];
    for(int i = 0; i < a; i++) {
        if(sumA[i] >= max) {
            max = sumA[i];
        }
    }
    for(int i = 0; i < b; i++) {
        if(sumB[i] >= max) {
            max = sumB[i];
        }
    }
    printf("max = %d\n", max);
    return 0;
}