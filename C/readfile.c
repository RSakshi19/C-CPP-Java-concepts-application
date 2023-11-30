#include<stdio.h>
#include<fcntl.h>   //file control file handling chi controling chi kam astat
#include<unistd.h>
#include<string.h>

int main()
{

    int fd = 0; //file discriptor
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);//hi file aplya folder mdhe open hot apn tila open keli tr notpad mdhe crete hoil

    Ret = read(fd,Arr,10); //(kshatun vahchych , kshat vachaych, kiti vahcaych)
    
    printf("%d byes get read in the file",Ret);
    printf("data is %s\n",Arr);
    
    close(fd);
    return 0;
}
//O_APPEND mhnj shevti liha
//incomplete