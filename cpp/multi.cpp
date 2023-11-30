// multi inheritance //
///////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class Demo
{
    public : 
    int x;
    int y;

Demo()
{
    cout<<"Inside Demo constructor...\n";

    x = 10;
    y = 20;

}

~Demo()
{
    cout<<"Inside Demo Destructor...\n";

}

void fun()
{
    cout<<"Inside fun of Demo...\n";

}
};

class Hello: public Demo
{
    public:
    int a;
    int b;
    int c;

Hello()
{
    cout<<"Inside Hello Constructor...\n";
    a = 30;
    b = 40;
    c = 50;
}
~Hello()
{
    cout<<"Inside Hello Destructor...\n";

}

void gun()
{
    cout<<"Inside gun of Hello...\n";
}
};

class marvellous: public Hello
{
    public:
    int p;

    marvellous()
    
    {
        cout<<"Inside marvellous Constructor...\n";
        p = 60;
    }

    ~marvellous()
    {
        cout<<"Inside marvellous Destructor...\n";

    }

    void sun()
    {
        cout<<"Inside sun of marvellous....\n";
    }
};

int main()
{
    marvellous mobj;
    cout<<sizeof(mobj)<<"bytes\n";

       cout<<mobj.x<<"\n";
       cout<<mobj.y<<"\n";
       cout<<mobj.a<<"\n";
       cout<<mobj.b<<"\n";
       cout<<mobj.c<<"\n";
       cout<<mobj.p<<"\n";

    mobj.fun();
    mobj.gun();
    mobj.sun();
    

    return 0;
}