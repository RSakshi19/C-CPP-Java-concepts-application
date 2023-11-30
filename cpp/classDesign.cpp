#include<iostream>
using namespace std;    

class Array
{
    private:
    int *Arr;
    int iLength;

    public:
    Array(int Size) //constructor paramiterized khalun 5 value hi size mdhe yenar ani apn tyala copy kel ilength mdhe 5 ghala
    //Arr navacha pointer ahe yala dynamic memory alocate honar heap vr yache 5 bhag padnar 4 byte che
    //yacha smja 200 add asel tyamule 
    {
        iLength = Size;
        Arr = new int[iLength];  // yacha atmdhe apn array la memory alocte keli when you create obj yala memory milnar
    }
    ~Array()
    {
        delete []Arr;   //ha akkha array dealocate krnar  jeva obj smpel teva
    }
    void Accept()   // ethe apn ek method lihili
    {
        int iCnt = 0;
        cout<<"Enter the elements :"<<"\n";
        for(iCnt = 0;   iCnt < iLength; iCnt++) //ethe input ghenar 
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()   // ethe apn ek method lihili
    {
        int iCnt = 0;
        cout<<"elements of the array are  :"<<"\n"; //output disnar
        for(iCnt = 0;   iCnt < iLength; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }
};
int main()
{

    Array aobj(5);
    aobj.Accept();
    aobj.Display();
    return 0;
}
/*

ya mdhe apn don characteristics private thevle krn nntr koni change krayla nako ani khali method public thevlya 
construct is yse to alocate the resourses hear aaray is the resourses jr apn jaun four obj create kele tr ajun veglya diagram yettl
sgle obj vegle consider kele jatil

*/