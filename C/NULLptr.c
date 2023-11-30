#include<stdio.h>

int main()

{
    int *ptr;

    printf("%d\n",*ptr);

    return 0;

}

#define NULL (void *) 0

int *ptr = NULL;