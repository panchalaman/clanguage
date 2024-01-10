#include <stdio.h>
int main(){
    float a;
    printf("Insert cost price of the product: \n");
    scanf("%f", &a);
    float b;
    printf("Insert selling price of the product: \n");
    scanf("%f", &b);
    if(a < b){
        float c = b - a;
        printf("You have made a profit of %f Euros", c);
    }
    else{
        float d = a - b;
        printf("You have incurred a loss of %f Euros", -d);
    }
    return 0;
}