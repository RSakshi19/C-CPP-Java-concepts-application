/*
    magcha code mdhe jo error yet hota tyach solution
    demo is the return value operator is a keyword  jr apn oprator over loading krtoy he klnyasathi apn tithe lihav lagt
    aplyala just tyacha code lihaycha ahe jas khali ahe tas


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
            i = a;  //ethe value janar ahe 16
            j = b;  //27
        }
};

Demo operator +(Demo op1, Demo op2)
{
    cout<<"Inside operator overloaded function\n";
    return Demo(op1.i+op2.i, op1.j+op2.j);
    //return Demo(11+5,21+6);
    //return Demo(16+27);
}
int main()
{
    Demo obj1(11,21);
    Demo obj2(5,6);
    Demo obj(0,0);

    obj = obj1 + obj2;  //ha call internally janar ahe obj = +(obj1,obj2);

cout<<obj.i<<"\n";
cout<<obj.j<<"\n";

    return 0;
}