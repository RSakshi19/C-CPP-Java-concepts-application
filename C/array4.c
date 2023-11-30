#include<stdio.h>

int main()

{

    int Arr[4] = {11,21,51,101};

    printf("Base address of array : %d\n",Arr);        //100 diagram mdhl answer first address

    printf("Base address of first element of array : %d\n", &(Arr[0]));     //100 same tech answer

    printf("First element is : %d\n", Arr[0]);         //11 atli value vicharli ahe

    printf("Size of whole array : %d\n",sizeof(Arr));           //16 sglya diagram chi 4,4 ne size 

    printf("Size of second element of array : %d\n",sizeof(Arr[1]));        //4 eka element chi size



return 0;

}