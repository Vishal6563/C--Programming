#include<iostream>
using namespace std;

class Demo
{
   public:
   void fun()
   {
    cout<<"inside fun"<<"\n";
   }
   void gun()
   {
    cout<<"inside gun"<<"\n";
   }
};

int main()
{
    Demo obj;

    cout<<sizeof(obj)<<"\n";

    obj.fun(); //call 1000
    obj.gun(); //call 2000

    return 0;
}