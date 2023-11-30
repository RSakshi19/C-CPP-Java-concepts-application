
//yamdhe fakt char nahi baki sgle points use kelet
//constnt input arguments, constnt veribles, constant behaviousrs and constant object
//
#include<iostream>
using namespace std;

    class Demo
    {
        public:
        int i;
          int j;
          int k;


         Demo(int a, int b, int c) : j(b),k (c) //paramterise constructor
        {
                i = a;
                j = b;
                k = c;
        }
         
         void fun()     //ya mdhe sgl allowed ahe
         {
            i++;
            j++;
            k++;
         }

         void gun(int x, const int y)const    //fakt ya function cha atlya value change honar nahi karn he const ahe 
         {
            int no1 = 10;
            const int no2 = 20;
            x++;            //A
           // y++;    //NA
            no1++;  //A
           // no2++;  //NA
           // i++;    //NA
            //j++;    //NA
            //k++;    //NA
         }

         
    };
int main()
{
    
 Demo obj(11,21,51);      

 obj.fun();
 obj.gun(51,101);

 const Demo obj2(11,21,51);
 //obj2.fun();
 obj2.gun(51,101);
    
    return 0;
}