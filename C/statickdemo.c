#include<stdio.h>

void Fun()      //he khihi return kart nahi mhnun direct veriable create karaych
{
    auto int i = 10;         //ha storage cls bidefault auto ahe
    i++;
    printf("value of i : %d\n",i);

}

int main()


{

Fun();      //fun navacha function la call kela
Fun();      // darveli value 11 ch milnar he avoid karnyasathi ha storage class ahe statick
Fun();      

    return 0;
}