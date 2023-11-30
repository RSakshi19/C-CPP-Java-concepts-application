
#include<iostream>

using namespace std;

class Demo // hech nav khali use karaych
{
    public:     //access specifires
    int i;  // characterisitcs
    int j;  //characterisitcs

    Demo () //defualt constructor... the constructure which accept nothing from user(direct ghetlela ganpati)
    {
        cout<<"Inside default constructor\n";
        i = 0;
        j = 0;
    }
    //int A = 11
    //int B = 21
    
    Demo (int A, int B) //paramiterised constructor (clr wise ganapati)
    {
        cout<<"Inside parameterised constructor\n";
        i = A;
        j = B;
    }
    //Demo &ref = obj2

    Demo(Demo &ref) //copy constructor(photo dakhvun same tasa ganpati)
    {
    cout<<"Inside copy constructor\n";
    i = ref.i;
    j = ref.j;
}

    ~Demo()     //tilda ~ jr ahe tyacha opposite krto
    {
        cout<<"Inside Destructor\n";
    }
};


int main()
{
    Demo obj1;    //line no 11 vr janar ani value initilise honar obj1 mdhe
    Demo obj2(11,21);   
    Demo obj3(obj2);
    

    return 0;
}
