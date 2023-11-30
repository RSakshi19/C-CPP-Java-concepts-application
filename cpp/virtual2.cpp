#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    int j;
    int k;

    void fun()
    {
        cout<<"Inside the fun of demo";
    }
};

class Derived : public Demo
{
    public:
    int a;
    int b;
    
    void gun()
    {
        cout<<"Inside gun of Derived";
    }
};

int main()
{
    
    Base *bp1 = new Base;// NC
    Derived *dp1 = new Derived;//NC
    Base *bp2 = new Derived;//UC
    //Derived *dp2 = new Base;//DC


    return 0;
}