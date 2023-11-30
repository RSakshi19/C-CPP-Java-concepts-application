#include<stdio.h>
#include<fcntl.h>   //file control file handling chi controling chi kam astat
#include<unistd.h>
#include<string.h>

int main()
{

    int fd = 0; //file discriptor
    char Arr[] = "PRE PLACEMENT ACTIBVITY";
    int Ret = 0;

    fd = open("Marvellous.txt",O_APPEND);//hi file aplya folder mdhe open hot apn tila open keli tr notpad mdhe crete hoil

    Ret = write(fd,Arr,string(Arr)); //(kshat lihaych , kay lihaych, kiti lihaych)
    
    printf("%d byes get written in the file",Ret);
    
    close(fd);
    return 0;
}
//O_APPEND mhnj shevti liha
//incomplete