
//in this code we create one class this class contains 4 characteristics.
//and we use access specifires for checking  which allowed and which is not allwod 
// then we create one pramiterised constructor for value passing and 
//then create one function and in this function we print some couts for cheking values are print properly or not
// in this main function we create object of a demo class and again prints some couts for cheking which is allowed for only cls not in main funtions
//in this code there is no such a logic and all we just perform this code for cheking access specifiers...............
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Demo
{
    int i;          //Bydefaut privte asto
    public :
        int j;
    private:
        int k;
    protected:
        int a;

    public :
    Demo()          //paramiterized constructor
    
    {
        i = 10;
        j = 20;
        k = 30;
        a = 40;
    }            
    void Display()
    {
        cout<<"Value of i : "<<i<<"\n";
        cout<<"Value of j : "<<j<<"\n";
        cout<<"Vlaue of k : "<<k<<"\n";
        cout<<"Value of a : "<<a<<"\n";

    }

};

    int main()
    {
        Demo obj;
        //cout<<"Value of i : <<obj.i<<\n"; //NA
        cout<<"Value of j : "<<obj.j<<"\n";   //A
        //cout<<"Value of k : <<obj.k<<\n"; //NA
        //cout<<"Value of a : <<obj.a<<\n"; NA

        obj.Display();

        return 0;
    }

