#include<iostream>

namespace Marvellous
{
    void Display()
    {
        std::cout<<"Inside display of marvellous\n";
    }
}
namespace Infosystems
{
    void Display()
    {
       std:: cout<<"inside display of infosystems\n";
    }
}
int main()
{

Marvellous::Display();
Infosystems::Display();

    return 0;
}

//2 namespaces kelya userdefine krn tya apn kelelya confusion disav mhnun display method lihili ashi lihita yet nahi apn he lihu shklo karn 
//apn tyala jaga dili vegli compiler error deu shkto jr ekach asta tr jr display hi neked nvti ti namespace mdhe hoti 
//using namespace vr start la lihilay jar apn tas nahi lihil tr aplayal cout mdhe std :: as lihun pn kru shkto