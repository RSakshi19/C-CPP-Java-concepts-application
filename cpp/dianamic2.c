#include<stdio.h>//printf ani scanf sathi 
#include<stdlib.h> //mallock callock reallock pahij mhnun ghetl

int main()

{

    int iSize = 0;
    int *ptr = NULL;

    printf("enter the size of array : \n");
    scanf("%d",&iSize);


ptr = (int*)calloc(iSize , sizeof(int));

ptr[0]=10;
ptr[1]=11;
ptr[2]=12;

free(ptr);

    return 0;
}
