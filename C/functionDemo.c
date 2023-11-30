
    //in this program use scanf for input

#include <stdio.h>

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int Value1 = 0;
    int Value2 = 0;
    int Ret = 0;

    printf("Enter first number : \n");
    scanf("%d", &Value1);       //scanf function he user kdun input ghet.

    printf("Enter second number : \n");
    scanf("%d", &Value2);       //scanf function he user kdun input ghet.

    Ret = Addition(Value1, Value2);
    printf("Addition is : %d\n", Ret);

    return 0;
}