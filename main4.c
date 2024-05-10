#include <stdio.h>

int main(){
    int i,j;
    int multiply;
    for (i = 1; i <= 12; i++)
    {
        printf("Math of %d\n", i);
        for (j = 1; j <= 12; j++)
        {
            multiply = i * j;
            printf("%d * %d = %d\n", i, j, multiply);
        }
        printf("\n");
    }
    
}