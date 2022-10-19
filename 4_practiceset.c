//q1______________________________________________________________________________________
/*
#include<stdio.h>

int main(){
    int length , breadth;
    printf("Enter length of rectangle here \n");
    scanf("%d", &length);

    printf("Enter the breadth of rectangle here \n");
    scanf("%d", &breadth);
    
    printf("The area of rectangle is %d\n",length*breadth);
    return 0;
}
*/

/*
#include<stdio.h>

int main(){
    int length =4, breadth=3;
    int area = length*breadth;
    printf("The area of rectangle is%d\n",area);
    return 0;
}
*/
//q2_______________________________________________________________________________
/*
#include<stdio.h>

int main(){
    int radius;
    printf("Enter the radius of circle here\n");
    scanf("%d", &radius);

    printf("The area of circle is %d\n",22/7*radius*radius);
    return 0;
}
*/
/*
#include<stdio.h>

int main(){
    int radius;
    float pi = 3.14;
    printf("Enter the radius of circle here\n");
    scanf("%d", &radius);

    printf("The area of circle is %f\n",pi*radius*radius);
    return 0;
}
*/

//modifed
/*
int main(){
    int radius,height;
    float pi = 3.14;
    printf("Enter the radius of cylinder here\n");
    scanf("%d", &radius);

    printf("Enter the height of cylinder here\n");
    scanf("%d", &height);

    printf("The volume of cylinder is %f\n",pi*radius*radius*height);
    return 0;
}
*/

//q3_________________________________________________________________________________________
/*
Formula = (0°C × 9/5) + 32 = 32°F
*/
/*
#include<stdio.h>

int main(){
    float celsius, num;
    num = 1.8;
    printf("Enter temperature in celsius \n");
    scanf("%f",&celsius);

    printf("The temperature in fahrenheit = %f\n",(celsius*num)+32);
    return 0;
}
*/
/*
#include<stdio.h>
*/

// int main(){
//     float celsius, formula;
//     formula = (celsius * 9/5) + 32 ;
//     printf("Enter the tempereture in celsius\n");
//     scanf("%f",&celsius);

//     printf("The temperature in fahrenheit = %f\n",formula);
//     return 0;
// }

//q4_________________________________________________________________________________
// formula ==== A = P(1 + rt)
#include<stdio.h>

int main(){
    float principle , rate , time, simpleInterest;
    simpleInterest = (principle * rate * time)/100;

    printf("Enter principle =\n");
    scanf("%f",&principle);

    printf("Enter rate =\n");
    scanf("%f",&rate);

    printf("Enter time =\n");
    scanf("%f",&time);

    printf("The answer is %f\n",simpleInterest);

    return 0;
}