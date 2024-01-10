#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    // if(99 < a && a < 1000 ){
    // printf(" The number %d is a 3-digit number", a);
    // }
    // else{
    //     printf(" The number %d is not a 3-digit number", a);
    // }
    
    if (a % 5==0 && a % 3 == 0){
        printf(" The number %d is divisible by 5 and 3", a);

    }
    else {
        printf(" The number %d is not divisible by 5 and 3", a);
    }
    return 0;
}