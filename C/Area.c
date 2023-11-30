#include<stdio.h>

int main()
{

    float Radius = 0.0f;        //normal veriable
    const float PI = 3.14f;        // constant veriable
    float Area = 0.0f;          //normal veriable

    printf("Enter the size of radius : \n");
    scanf("%f",&Radius);
    
    Area = PI * Radius * Radius;        //radius*radius mhnj radius res to square
    

    printf("Area if circle is : %f\n",Area);


    return 0;
}