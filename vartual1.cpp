#include<iostream>
using namespace std;

class Base
{
    public:
    int A,B;

    void fun()  //1000
    {
        cout<<"inside fun of Base"<<"\n";
    }
      void gun()  //2000
    {
        cout<<"inside gun of Base"<<"\n";
    }
      void sun()  //3000
    {
        cout<<"inside sun of Base"<<"\n";
    }

};
class Derived : public Base
{
    public:
    int X,Y;

      void fun()  //4000
    {
        cout<<"inside fun of Derived"<<"\n";
    }
      void gun()  //5000
    {
        cout<<"inside gun of Derived"<<"\n";
    }
      void sun()  //6000
    {
        cout<<"inside sun of Derived"<<"\n";
    }


};

int main()
{

  cout<<"size of basa :"<<sizeof(Base)<<"\n";
  cout<<"size of Derived :"<<sizeof(Derived)<<"\n";

   Base *bp = new Base;               //no casting (allowed)
   Derived *dp = new Derived;      //no casting (allowed)


   Base *bp1 = new Derived;  // up casting (Allowed)
  //  Derived *dp1  = new Base;  //Down casting (No allowed)


    return 0;
}