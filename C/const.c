#include<stdio.h>

int main()
{
    int X = 11;

    const int Y = 11;

    X++;   //allowed
    X--;    //allowed
    X = 21; //allowed


// Y++;     //Not allowed
// Y--;     //Not allowed
//Y = 21;    //Not allowed
return 0;

}