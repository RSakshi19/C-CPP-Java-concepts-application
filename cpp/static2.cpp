#include<iostream>      


using namespace std;

class Demo
{
    public:

    int i;      //characteristics ahet yana 8 byts memory milel  non static characteristics
    int j;
    static int k;       // loncha chi vati ahe yala memory baher milel karn ha static ahe


Demo(int a= 10, int b = 20) //parameterised constructor with default aruments
{
    i = a;      
    j = b;
    
}


    void Display()
    {
        cout<<"Value of i"<<i<<"\n";
        cout<<"Value of j"<<j<<"\n";
       
    }

};

int Demo::k = 111;      //static veriable ahe

int main()
{
    

    Demo obj1(11,21);       
    Demo obj2(51,101);
    Demo obj3(121,151);

cout<<"SIze of object is :"<<sizeof (obj1)<<"\n";
cout<<"Value of k is :"<<Demo ::k<<"\n";    //he cout jr apn display mdhe lihil tr kahli apn dislay la 3 vela call kelay mg te 3 vela display hoil 


    obj1.Display();
    obj2.Display();
    obj3.Display();

    return 0;
}