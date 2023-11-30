#include<stdio.h>
#include<fcntl.h>   //file control file handling chi controling chi kam astat
#include<unistd.h>

int main()
{

    int fd = 0; //file discriptor

    fd = open("Marvellous.txt",O_RDWR);//hi file aplya folder mdhe open hot apn tila open keli tr notpad mdhe crete hoil

    if(fd != -1)
    {
        printf("File is successfully open with FD :%d\n",fd);    
    }
    
    close(fd);
    return 0;
}
//o for read only
//
