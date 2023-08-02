#include<iostream>
using namespace std;

class Base
{
    public:
    int A,B;

    virtual void fun()  //1000
    {
        cout<<"inside fun of Base"<<"\n";
    }
     virtual void gun()  //3000
    {
        cout<<"inside sun of Base"<<"\n";
    }
    virtual void sun()  //3000
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
     virtual void sun()  //6000
    {
        cout<<"inside sun of Derived"<<"\n";
    }
     virtual void run()  //6000
    {
        cout<<"inside sun of Derived"<<"\n";
    }


};

int main()
{
  cout<<"size of Baes :"<<sizeof(Base)<<"\n";
  cout<<"size of Derived :"<<sizeof(Derived)<<"\n";

   Base *bp= new Derived;  // up casting (Allowed)
   
   bp->fun();   //derived fun
   bp->gun();   //baes gun
   bp->sun();   //derived sun
  //  bp->run();   //error
   
    return 0;
}