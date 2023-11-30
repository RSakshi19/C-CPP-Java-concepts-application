/*
ya mdhe fakt constant char jya initilised kelelya nahi he chalt nahi as ahe 
jr aplyla karaycha astil tr jeva constructor apn krto teva bracket mdhe pass karaych 



*/



#include<iostream>
using namespace std;

    class Demo
    {
        public:
        int i;
         const int j;
         const int k;


         Demo(int a, int b, int c) : j(b),k (c) //paramterise constructor
        {
                i = a;
               // j = b;//ehte value initiolise honar nahi karn constructor obj create kelya nntr hoto pn yamdhe adhi defualt value 0 aste ani nntr paramiter pass kele tr tithe value janar nahi karn te const ahe
                //k = c;  // same vrcha sarkh
        }
         
    };
int main()
{
    
 Demo obj(11,21,51);      // isue const mule aala ahe karn const j ani k la initilisee kel pahij as compiler mhnto pn apn as krt nahi karn tithe memory ch milat nahi

    cout<<"value of i ; "<<obj.i<<"\n";
    cout<<"value of j ; "<<obj.j<<"\n";
    cout<<"value of k ; "<<obj.k<<"\n";
    
    obj.i++;
   // obj.j++;  //NA
    //obj.k++;  //NA
}