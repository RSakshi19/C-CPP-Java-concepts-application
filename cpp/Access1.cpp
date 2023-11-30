//in this code we create one class this class contains 4 characteristics.
//and we use access specifires for checking  which allowed and which is not allwod 
// then we create one pramiterised constructor for value passing and 
//then create one function and in this function we print some couts for cheking values are print properly or not
// in this main function we create object of a demo class and again prints some couts for cheking which is allowed for only cls not in main funtions
//in this code there is no such a logic and all we just perform this code for cheking access specifiers...............
//...................................................................................................................................................
// but in this function we use one derived class also and see access specifire are work or not
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Demo
{
    int i;
    public :
        int j;
    private:
        int k;
    protected:
        int a;

    public:
    Demo()
    {
        int i = 10;
        int j = 20;
        int k = 30;
        int a = 40;

    }    
    void Display()
    {
        cout<<"Value of i : "<<i<<"\n"; // A
            cout<<"Value of j : "<<j<<"\n"; // A
            cout<<"Value of k : "<<k<<"\n"; // A
            cout<<"Value of a : "<<a<<"\n"; // A   
    }
};
class Hello : public Demo
{
    public:
    void HelloDisplay()
    {
        
        //cout<<"Value of i : "<<i<<"\n"; // NA
            cout<<"Value of j : "<<j<<"\n"; // A
            //cout<<"Value of k : "<<k<<"\n"; // NA
            cout<<"Value of a : "<<a<<"\n"; // A   


    }
};
int main()
{
    Hello hobj;
    hobj.HelloDisplay();

    return 0;

}