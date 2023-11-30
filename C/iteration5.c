#include <stdio.h>      // ya code mdhe fakt 1 vela jay ganesh print krun bhetel apn 0 takl tari.

int main()

{
    int i = 1;
    int count = 0;

    printf("Enter number of times you want to display JAY GANESH on screen\n");
    scanf("%d", &count);

    do
    {
        printf("Jay Ganesh....\n");
        i++;
    } while (i <= count);

    return 0;
}