#include<stdio.h>
int main(){
    int a;
    printf(" Give  a number:\n");
    scanf("%d", &a);
    if(a < 0){
        int b = -1 * a;
        printf("%d",b);
    }
    else{
        printf("%d",a);

    }
    return 0;
}