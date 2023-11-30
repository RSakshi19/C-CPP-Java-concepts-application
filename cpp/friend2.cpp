//ya mdhle eror gele karn friend lihila 
//this is a first part (naked)
#include<iostream>

using namespace std;

class Demo
{
    
    public :
    int i;
    private:
    int j;
    protected :
    int k;

    public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;

    }
    friend void Display();  //display is a function accept nothing and return nothing is a friend of my classs
};

void Display()      //there is no relation with dmo funtion
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";

}
int main()
{
Display();



    return 0;
}
