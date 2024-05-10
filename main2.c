#include <stdio.h>

int main(){
    int i, j;
    int num1;
    for (i = 1; i < 11; i++)
    {
        num1=1;
        for  (j = 1; j <= i; j++)
        {
            num1 *= j; 
        }
        printf("%d! = %d",i, num1);
        printf("\n");
    }
}