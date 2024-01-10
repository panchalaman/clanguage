#include<stdio.h>
int main(){
    float length, breadth;
    printf("Enter length of the rectangle:\n");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle:\n");
    scanf("%f", &breadth);
    float area, perimeter;
    area = length * breadth;
    printf("Area of the rectangle is %f\n", area);
    perimeter = 2 * (length + breadth);
    printf("Perimeter of the rectangle is %f\n", perimeter);
    if(area < perimeter){
        printf("Perimeter is greater than area");
    }
    else{
        printf("Area is greater than perimeter");
    }
    return 0;
}