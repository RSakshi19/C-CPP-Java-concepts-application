#include<stdio.h>

void Fun()      //he khihi return kart nahi mhnun direct veriable create karaych
{
    static int i = 10;         //ethe apn statick lihil ki ptryek veli new value yeil tea example
    printf("value of i : %d\n",i);
    i++;
}

int main()


{

Fun();      //fun navacha function la call kela kiti vel apn kru shkto
Fun();      // value chage honar mhnj 11 chi 12 chi 13 honar
Fun();      

    return 0;
}