
        //Arrey tayar karayche prakar [] mdhe size den optional ahe jr apn pudhe {} mdhe data lihila asel tr...

#include<stdio.h>

int main()
{
    //1
    int Arr[5] = {10,20,30,40,50};      //[] chya aat mdhe lihil tri chalt

    //2
    int Brr[] = {10,20,30,40,50};       // [] chya aat mdhe nahi lihil tri chalt

    //3
    int Cr[7] = {10,20,30};            //3 lihile urlelya cha aat mdhe kahi nahi mhnj 0 ahe 

    //4
    int Drr[5];
    Drr [0] = 10;                     // ek ek create kel tr tyala member by member initilisation mhntat
    Drr [1] = 20;
    Drr [3] = 30;
    Drr [4] = 40;
    Drr [5] = 50;

    return 0;
}