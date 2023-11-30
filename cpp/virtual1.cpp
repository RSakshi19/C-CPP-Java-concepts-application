#include<iostream>
using namespace std;

class Base
{
    public:
    int i;
    int j;
    int k;

    void Fun()
    {
        cout<<"Inside Fun of base\n";
    }
};

class Dirived : public Base
{
    public:
    int a;
    int b;

    void Gun()
    {
        cout<<"Inside Gun of dirived\n";
    }
    
};
 
int main()
{
    Base bobj;
    Dirived dobj;

    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";   

    bobj.Fun();

    dobj.Fun();
    dobj.Gun();

    return 0;
}