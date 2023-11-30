#include<stdio.h>
int main()
{
    int A = 0;
    int B = 0;

    printf("Enter your first number\n");
    scanf("%d",&A);
    
    printf("Enter your second number\n");
    scanf("%d", &B);

    if(A>B)
    {
        printf("%d is bigger than %d",A,B);

    }
    else 
    {
        printf("%d is bigger than %d",B,A);
    }
    
        return 0;
}