#include <stdio.h>

int main(){
    int inp;
    do{
        printf("Enter your num: ");
        scanf("%d", &inp);
    } while (inp != 3 && inp != 10);
}