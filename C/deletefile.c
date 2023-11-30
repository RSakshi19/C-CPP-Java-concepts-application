#include<stdio.h>
#include<fcntl.h>   //file control file handling chi controling chi kam astat
#include<unistd.h>
#include<string.h>

int main()
{
    unlink("Marvellous.txt");

    printf("file deleted succesfully...\n");

    return 0;
}