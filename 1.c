/*The length & breadth of a rectangle and radius of a circle are input 
through the keyboard. Write a program to calculate the area and 
perimeter of the rectangle, and the area and circumference of the 
circle. */


#include<stdio.h>

int main(){
    int len, breadth;
    printf("Please enter the value of len: ");
    scanf("%d", &len);
    printf("please enter the value of breadth: ");
    scanf("%d", &breadth);
    int area_rec = len*breadth;
    printf("The area of rectangle = %d\n", area_rec);
    // time to calculate area of circle:

    float radius;
    printf("please enter the value of radius: ");
    scanf("%f", &radius);
    float area_circle = 3.1415*radius*radius;
    printf("the area of circle = %f", area_circle); 
    return 0;
}