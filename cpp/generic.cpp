#include<iostream>
using namespace std;
template<class T>
T Addition(T no1, T no2)
{
    T ans;  //ha kon ahe he kon ahe he kalt ch nahiye karn i nahiye adhi apn nahi lihil karn to generic ahe tyamule apn 0 thevla ch nahi garbage yenar nahi
    ans = no1+no2;
    return ans;

}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = Addition(10,11);
    fRet = Addition(10.0f,11.0f);
    dRet = Addition(10.0,11.0);

    cout<<iRet<<"\n";
    cout<<fRet<<"\n";
    cout<<dRet<<"\n";

    return 0;
}