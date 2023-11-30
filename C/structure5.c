#include<stdio.h>

struct Demo     //supose this is a sacha of ganapati murti
{
    int i;
    float f;
    int j;

};

int main()
{
    struct Demo obj1;       // ganpati cha sacha chya tayr kelelya 2 murtya
    struct Demo obj2;

struct Demo *ptr = &obj2;


obj1. i = 11;       // hatat box pedhyacha. fast process
obj1. f = 90.99;
obj1.j = 21;

ptr-> i = 51;       //dianing table vrcha pedha.arrow operator is called as indirect 
ptr-> f = 90.88;
ptr-> j = 101;

printf("%d\n",obj1.i);
printf("%d\n",ptr->i);

   return 0;
}


// in my words...................
/*
#include<stdio.h>

    struct Demo 
    {
        int x;
        int j;

    };

int main()
{

    struct Demo obj1;
    struct Demo obj2;

    obj1.x = 11;
    obj1.j = 21;

    struct Demo *ptr = &obj2;

    ptr -> x = 22;
    ptr -> j = 44;

    printf("%d\n",obj1.x);
    printf("%d\n",obj1.j);

    printf("%d\n",ptr -> x);
    printf("%d\n",ptr -> j);

    printf("size of first object is %d\n",sizeof(obj1));
    printf("size of second object is %d\n",sizeof(obj2));


    return 0;
}
*/