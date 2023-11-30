//yamdhe apn function decleared class cha aat mdhe lihil ani defination khali kel
// ha code jara vegla ahe yamdhe inheritance nahiye.
//actual class ha demo navacha ahe jo 12 pasun start zala yacha aat mdhe 3 char ahet
//yacha aat mdhe ek defualt construtor ahe f
//starting la apn claass hello lihil tyavrun kalal ki he display navacha function ch fried ahe
//
#include<iostream>

using namespace std;
class Hello //ethe fakt declear kel yach sgl khali ahe te ethe chalt nahi mhnun khali thevl
{
    public:
      void Display();
};
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
    friend void Hello::Display();
};
  void Hello::Display()
    {
        Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";
    }



int main()
{
Hello hobj;

hobj.Display();


    return 0;
}
