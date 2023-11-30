#include<stdio.h>

struct Demo
{
    int i;
    float f;

    struct Hello
    {
        int x;
        float d;
    }hobj;
}dobj;

int main()
{
    struct Demo dobj;
    struct Demo hobj;

    dobj.i = 11;
    dobj.f = 20.22;

    dobj.hobj.x = 77;
    dobj.hobj.d = 90.99;

    printf("size of demo object is %d\n",sizeof(dobj));
    printf("size of hello object s %d\n",sizeof(hobj));

    printf("%d\n",dobj.i);
    printf("%f\n",dobj.f);

    printf("%d\n",dobj.hobj.x);
    printf("%f\n",dobj.hobj.d);


    return 0;
}