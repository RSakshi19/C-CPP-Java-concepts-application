//in this code we achive the concept of function overloading  The addition function defines 3 times  name of all functions are same is the overloading
//the first addition funtions accept two intiger as a parameter and return the intiger 
//the second addition funtion accepts three intiger as a paramiter and return the intiger
// the third addition funtion accept two floats as a paramiter and return float 
//according to the concept of function overloading all the functions are having same name and different prototypes.

//when we compile the code compiler will chanvge the name of every funtion with mangled name that is called as a edited name.
//which funtion should be called gets decided at atime of compilation due to which it is called as a early binding means compile time polymorphisum.

#include<iostream>
using namespace std;

class Demo
{
    public :
    
    int Addition(int A, int B)      //Addition@2ii
    {
        int Ans = 0;
        Ans = A + B;
        return Ans;
    }
    int Addition(int A, int B, int C)       //Addition@3iii
    {
        int Ans = 0;
        Ans = A+B+C;
        return Ans;
    }
    float Addition(float A, float B)    //Addition@2ff
    {
        float Ans = 0;
        Ans = A + B;
        return Ans;
    }
};

int main()
{
    Demo obj;

    int i = 10;
    int j = 20;
    int k = 30;
    int Ret = 0;
    
    float p = 5.2f;
    float q = 7.2f;
    float fRet = 0.0f;

    Ret = obj.Addition(i,j);
    cout<<"Adition is :"<<Ret<<"\n";

    Ret = obj.Addition(i,j,k);
    cout<<"Addition is :"<<Ret<<"\n";

    fRet = obj.Addition(p,q);
    cout<<"Addition is :"<<fRet<<"\n";

    return 0;
}


