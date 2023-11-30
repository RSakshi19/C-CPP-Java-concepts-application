/*
as a member funciton ahe mhnj clas cha aat magashi kelel neked hot mhnj cls cha baher
yasathi caller object lagto mhnj call kranara object
he evdh use kraych nahi
smja bank project ahe ani 2 customer cha seprate object ahe ani eka couple ne karj apply kel  tr tya company ne he check kel ki joint acc ahe
tr te donhi obj la + kel jat tyani internally he kel  jr apn aplya project mdhe he overload kel tr chalt
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
        Demo operator +(Demo op2)
{
    cout<<"Inside operator overloaded function\n";
    return Demo(this->i+op2.i, this->j+op2.j);
    //return Demo(11+5,21+6);
    //return Demo(16+27);
}
};


int main()
{
    Demo obj1(11,21);
    Demo obj2(5,6);
    Demo obj(0,0);

    obj = obj1 + obj2;  //ha call internally janar ahe obj = +(obj1,obj2);
    //obj = obj1.+(obj2)
cout<<obj.i<<"\n";
cout<<obj.j<<"\n";

    return 0;
}