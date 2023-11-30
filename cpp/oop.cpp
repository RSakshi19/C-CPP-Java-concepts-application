//first cpp code just normal code.

#include<iostream>

using namespace std;

class Demo
{
    public: //sglyana disnare hall mdhle objects are visible
        int i;
        int j;


        void fun()
        {
            cout<<"Inside fun of Demo class\n";

        }

};

int main()
{


     Demo obj1;
     Demo obj2;

     obj1.i = 11;
     obj1.j = 21;

     obj2.i = 10;
     obj2.j = 20;

     obj1.fun();
     obj2.fun();

    return 0;
}


