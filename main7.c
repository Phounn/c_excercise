#include <stdio.h>

int main(){
    int inp = 0;
    do{
        inp++;
        printf("Enter your num: %d\n", inp);
    } while (inp != 3 && inp != 10);
}