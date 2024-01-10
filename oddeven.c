#include <stdio.h>
int main () {
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    if(n%2==0){
        printf("The number %d is an 'Even Number'", n);
        }
    // if(n%2!=0){
    //     printf(" The number %d is an 'Odd Number'", n);
    else{
        printf(" The number %d is an 'Odd Number'", n);
    }
    
    return 0;
}