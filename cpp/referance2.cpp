
#include<iostream>
using namespace std;
int main()
{
    int Arr[4] = {11,12,13,14};
    int (&Brr) [4] = Arr;

    cout<<Arr[0]<<"\n";     //11
    cout<<Brr[0]<<"\n";     //11

    cout<<Arr[3]<<"\n";     //14
    cout<<Brr[2]<<"\n";     //13




    return 0;
}