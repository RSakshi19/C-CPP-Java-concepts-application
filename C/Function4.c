
    // int this program use 3 function add, sub, multiplication

#include <stdio.h>

int Addition(int No1, int No2)
{
    int Sum = 0;
    Sum = No1 + No2;
    return Sum;
}

int Substraction(int Data1, int Data2)
{
    int Result = 0;
    Result = Data1 - Data2;
    return Result;
}

int Multiplication(int mult1, int mult2)
{
    int Multi = 0;
    Multi = mult1 * mult2;
    return Multi;

}

int main()
{
    int Value1 = 10;
    int Value2 = 11;
    int Ans = 0;

    Ans = Addition(Value1, Value2);
    printf("Addition is: %d\n", Ans);         // d for decimal %d-No. hold krto.

    Ans = Substraction(Value1, Value2);
    printf("Substraction is : %d\n", Ans);

    Ans = Multiplication(Value1, Value2);
    printf("Multiplication is : %d\n",Ans);

    return 0; 
}
