#include<iostream>

using namespace std;

float Calculate (float Marks, float Outof = 100)    //jr koni nahi dil tr 100 je magitl te 65,56 kahihi
{
    float Percentage = ((Marks / Outof) * 100);
    return Percentage;

}
int main()
{
    float Ans = 0.0f;

    Ans = Calculate(86, 100);       //je magital tech dil
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calculate(86);
    cout<<"Percentage : "<<Ans<<"\n" ;   //direct 100 paiki 86 padle

Ans = Calculate(320,400);
cout<<"Percentage : "<<Ans<<"\n";   //tyancha dokyatli 100 nighun janar ani tithe 400 janar
    return 0;
}