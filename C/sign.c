#include <Stdio.h>

int main()

{
    int i = 10;         // we can use positive , negative veriable
    signed int j = 20;  
    signed int k = -30; 
    unsigned int a = 40; // kont hi negative value store kraychi nasel tr tithe unsigned lihaych (unsigned int b = -40; NA)

    printf("%d\n", i);       // 10
    printf("%d\n", j);      // 20
    printf("%d\n", k);     //-30
    printf("%d\n", a);     // 40


         //(eg-shugrcane juise)
    int x = 10;        //10Rs.
    short int y = 10;  //8Rs.
    long int z = 20;   //15Rs.

    printf("Size of x is : %d\n",sizeof(x));        //4 byts
    printf("Size of y is : %d\n",sizeof(y));        //2 byts
    printf("Size of z is : %d\n",sizeof(z));        //8 byts



    return 0;
}