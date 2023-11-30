//ya mdhe 2 eror ale kran apn friend shbd lihila navta next file mdhe ti file ahe
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
};

void Display()      //there is no relation with dmo funtion
{
    Demo obj;   //
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.i<<"\n";
    cout<<"Value of k : "<<obj.i<<"\n";

}
int main()
{

Display();

    return 0;
}
