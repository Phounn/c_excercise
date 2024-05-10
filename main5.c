#include <stdio.h>

int main(){
    int i,j;
    int multiply;
    int inp;
    printf("Input your num: ");
    scanf("%d", &inp);
    printf("Math of %d\n", inp);
    for (i = 1; i <= 12; i++)
    {
        multiply = inp * i;
        printf("%d * %d = %d\n", inp, i, multiply);
    }


    
}