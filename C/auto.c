#include<stdio.h>

void Display()
{

    int no = 11;
    int i;      // ethe garbage yeu shkt pn guanrentee nahi karn apn hotel cha 1st customer , kon tri adhi yeun gel asel tr garbage asnar
    

    printf("value of no : %d\n",no);
    printf("value of i : %d\n",i);          // garbage aal output mdhe 121212
    

}
int main()
{


    Display();  
        //printf("%d",no)    he apn ethe pavru shkt nahi karn te varcha function ch veriable ahe
    return 0;
}