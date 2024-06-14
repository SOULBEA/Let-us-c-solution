/*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r, ).
*/

// #include<stdio.h>
// #include<math.h>

// int main(){
//     float x, y, r, theta;
//     printf("Please enter the value of x: ");
//     scanf("%f",&x);
//     printf("Please enter the value of y: ");
//     scanf("%f",&y);

//     r = sqrt(x*x+y*y);
//     theta = atan2(y,x);
//     theta = theta * 180/ 3.14; // converts into degree;
//     printf("r = %f, and theta = %f", r, theta);

//     return 0;
// }

/* Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D.
*/

#include<stdio.h>

int main(){
    int c, d, e;
    printf("enter the value of c: ");
    scanf("%d", &c);
    printf("enter the value of d: ");
    scanf("%d", &d);
    e = c;
    c = d;
    d = e;
    printf("new location of c: %d\n", c);
    printf("new location of d: %d", d);

    return 0;
}