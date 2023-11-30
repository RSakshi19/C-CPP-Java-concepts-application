#include<stdio.h>
#include<fcntl.h>   //file control file handling chi controling chi kam astat
#include<unistd.h>

int main()
{

    int fd = 0; //file discriptor
    char Arr[] = "Marvellous infosystems";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);//hi file aplya folder mdhe open hot apn tila open keli tr notpad mdhe crete hoil

    Ret = write(fd,Arr,22); //(kshat lihaych , kay lihaych, kiti lihaych)
    
    printf("%d byes get written in the file",Ret);
    
    close(fd);
    return 0;
}
//o for read only
//
