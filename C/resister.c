#include<stdio.h>

void Display()
{

    register no = 11;       //auto int no = 11
    register i;             //auto int i

    printf("value of no : %d\n",no);
    printf("value of i : %d\n",i);          

}
int main()
{


    Display();  
//printf("%d",no)
    return 0;
}