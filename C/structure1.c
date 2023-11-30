#include<stdio.h>

    struct Demo     //3 te 9 paryant ahe tyala structure decleration mhntat
    {
        int no;
        float f;    //he ekda lihil ki apn kiti pn obj tayar kru shkto
        int x;
        float d;

    };      //he last la dyav lagt

int main()
{

struct Demo obj1;
struct Demo obj2;       //3,4 kitihi object kru shkto

obj1.no=11;
obj1.f=10.5;        //havi ti value deu shkto
obj1.x=21;
obj1.d=20.5;

obj2.no=51;
obj2.f=50.5;
    struct Demo obj;

    printf("Size of structure is %d\n",sizeof(obj));        //kobi gaddi kiva kanatl kiti vajnach ahe te sngnar sizeof oprator



    return 0;
}