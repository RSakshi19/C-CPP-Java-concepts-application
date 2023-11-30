/*
    he add hot nahi karn obj chi addition hot nahi karn addition fakt  primittive datatype chi hote
    mhnun error ala apn je kel te user defined data type ch hot 
    compiler mhnto jr + operator ne addition of number krnar evdhch ahe 
    obj + obj kel tr compiler la he klt nahi karn he user defined ahet mhnun compiler la mahiti nahi
    demo navacha cls cha aat mdhe kay ahe he compiler la mahiti nahi 
    creater ne as sngitl jr addi multi kraychi asel tr tumhala je overloading kraychay tyacha code krun dya te amhi krto
    this is the problem
    solution ya mdhe nahi te next fil mdhe ahr
*/

#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
        int j;
        Demo(int a = 10, int b = 20)
        {
            i = a;
            j = b;
        }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(5,6);
    Demo obj(0,0);

   // obj = obj1 + obj2;    // this is the main problem solution in next tile


    return 0;
}