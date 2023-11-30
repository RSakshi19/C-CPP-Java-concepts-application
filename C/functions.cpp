//ref chalt nahi krn hi concept cpp mdhe ahe ti mage chalt nahi pudhch mage chalt nahi 
#include<stdio.h>

void Fun_Value(int No)
{
    No++;//10
}
void Fun_Address(int *ptr)//adress pthvtoy khalun mhnun ghenara pointer lagto
{
    (*ptr)++;//11
}
void Fun_Reference(int &ref)
{
    ref++;//11
}

int main()
{
int i = 10;
int j = 10;
int k = 10;

Fun_Value(i);
Fun_Address(&j);
Fun_Reference(k);

printf("Call by value : i %d\n",i);
printf("Call by address : j %d\n",j);
printf("Call by reference : k %d\n",k);

    return 0;
}