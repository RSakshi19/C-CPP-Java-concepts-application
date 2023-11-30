#include <Stdio.h>

int main()

{
    int No = 0;         //ethe 0 ch ahe(4 byt chi jaga milali asel)
    int Ans = 0;       // ethe 0 ahe.
    

    printf("Enter number :\n");
    scanf("%d",&No);

    Ans = No % 2;

    if (Ans == 0) // Jar ans madhe 0 asel tr no.even je apn printf mdhe lihil
        {

            printf("Number is even\n");

        }

            else // jar 0 nasel tr odd ahe apn printf mdhe lihil
        {

            printf("Number is odd\n");
        }

    return 0;
}