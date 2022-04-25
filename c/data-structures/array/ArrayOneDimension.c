#include <stdio.h>

void main()
{
    int array[4];
    int sizeOfArray = sizeof(array) / sizeof(int);

    for (int i = 0; i < sizeOfArray; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    int total = 0;
    for (int i = 0; i < sizeOfArray; i++) {
        total += array[i];
    }
    printf("total = %d", total);
}