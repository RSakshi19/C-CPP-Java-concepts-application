// single level inheritance//
/////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

class Demo
{
public:
    int x,y;

    Demo()
    {
        cout << "Inside demo constructor...\n";

         x = 10;
         y = 20;
    }

    ~Demo()
    {
        cout << "Inside demo destructor....\n";
    }

    void fun()
    {
        cout << "Insde fun of Demo...\n";
    }
};

class Hello : public Demo
{
public:
    int a,b,c;
    Hello()
    {
        cout << "Inside hello Constructor...\n";
         a = 30;
         b = 40;
         c = 50;
    }

    ~Hello()
    {
        cout << "Inside hello Destructor....\n";
    }

    void gun()
    {
        cout << "Inside gun of Hello....\n";
    }
};

int main()
{
    Hello hobj;
    cout << sizeof(hobj) << "bytes \n";

    cout << hobj.x << "\n";
    cout << hobj.y << "\n";
    cout << hobj.a << "\n";
    cout << hobj.b << "\n";
    cout << hobj.c << "\n";

    hobj.fun();
    hobj.gun();

    return 0;
}

