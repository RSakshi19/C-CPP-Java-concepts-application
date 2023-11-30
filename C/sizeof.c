
// ha program simple ahe fakt size kiti astat sathi.

#include <stdio.h>

int main()

{
    char ch = 'A';
    int i = 21;
    float f = 12.31f;
    double d = 89.90;

    printf("Size of character is : %d bytes\n", sizeof(ch)); // 1
    printf("Size of integer is : %d bytes\n", sizeof(i));    // 4
    printf("Size of float is : %d bytes\n", sizeof(f));      // 4
    printf("Size of double is : %d bytes\n", sizeof(d));     // 8

    printf("Base address of character is : %d\n", &ch); // aplya ram vr kuthe jaga ahe tyacha address asto
    printf("Base address of integer is : %d\n", &i);    // darveli vegla yeto
    printf("Base address of float is : %d\n", &f);
    printf("Base address of double is : %d\n", &d);

    return 0;
}