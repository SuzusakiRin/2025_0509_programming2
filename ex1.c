#include <stdio.h>
#include <stdlib.h>
#include "ex.h"

int ex1(void) {
    int a;
    printf("Size[N] = ");
    scanf("%d", &a);
    int *list = calloc(a, sizeof(int));
    for(int i = 0; i < a; i++) {
        printf("list[%d] = ", i);
        scanf("%d", &list[i]);
    }
    printf("\n");
    int max = list[0], min = list[0];
    for(int i = 0; i < a; i++) {
        if(list[i] >= max) {
            max = list[i];
        }
        if(list[i] <= min) {
            min = list[i];
        }
    }
    printf("max = %d\nmin = %d\n", max, min);
    return 0;
}