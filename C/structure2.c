#include<stdio.h>

struct Demo
{
    int no;
    int Arr[3];         //array pn create kru shkto
    float f;            //shli milun size ahe 20.

};

int main()

{

    struct Demo obj;

obj.no = 10;

obj.Arr[0] = 20;
obj.Arr[1] = 30;
obj.Arr[2] = 30;

obj.f = 90.90;

    return 0;
}


// maza practice vala 


/*
#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int Arr[3];
};

int main()
{

    struct Demo obj;

    obj.i = 22;
    obj.f = 90.99;

    obj.Arr[0] = 12;
    obj.Arr[1] = 90;
    obj.Arr[2] = 78;

    printf("%d\n",obj.i);
    printf("%f\n",obj.f);

    printf("%d\n",obj.Arr[0]);
    printf("%d\n",obj.Arr[1]);
    printf("%d\n",obj.Arr[2]);

    printf("%d\n",sizeof(obj));


    return 0;
}
*/