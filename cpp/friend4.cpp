/*
sagla code magacha sarkhach fakt name change ani ha code whole cls type cha ahe 
ya code cha aat mdhe hello navacha aat mdhe 2 function hote fun ani gun
demo la sngitl hello ha tuza friend ahe mhnj sgle member friend zale fun la ani gun la allow kel
whole class jatoy apaksh mhnj naked example jr eka party mdhel 80 percent gele ani 20 rahile tr member type 
ani jr akkhi party ch geli tr whole attacha code.
demo cha object 2 vela tayar kela karn vegle ahet. declrationla ; deycha defination la nahi
sgle fun friemd asu shkto mhnj fun ani gun.
company mdhe use =  jr apn 5 jan kam krt ase ani aplyala fakt ekach friend la aple private char vaprayche astil tr apn tyala
sngu shkt hoto ki tyala inherite kr pn as kelyavr to tyachi size jst vadhvel. tyamule apn tithe friend concept vapru shkto.
tya friend cha fakt prototype apn aplya cls mdhe lihun thevaycha pn tyala sgl disel 
ya mdhe hello ha demo che member access kru shkto pn demo hello che kru skt nahi jr as kraych asel tr tyacha prototype hello mdhe lihava lagel

*/
#include<iostream>
using namespace std;

class Hello
{
    public:
        void fun();
        void gun();     //he 2 funtions fakt declread kele
};
class Demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;

    public:
    Demo()
    {
        i = 10; j = 20; k = 30;
    }
    friend class Hello;     //ya vakyacha arth hello navacha sapmurn class friend ahe
};

//return value class name scope resolution :: functio name() as lihaych

void Hello :: fun()         //function che objects create kele
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";
}

void Hello :: gun()
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";
}

int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();

    return 0;
}