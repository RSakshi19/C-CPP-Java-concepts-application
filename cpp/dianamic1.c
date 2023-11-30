#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];
    int iSize = 0;
    int *ptr = NULL;

    printf("enter the siz of array :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize*sizeof(int));
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    free (ptr);


    return 0;
}