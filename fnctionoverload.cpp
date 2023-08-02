#include<iostream>
using namespace std;

class Demo
{
    public:

    int Addition(int No1 , int No2)
    {
        cout<<"addtionof two int :"<<"\n";
        return No1+No2;
    }

      int Addition(float No1 , float No2)
    {
        cout<<"addtionof two float :"<<"\n";
        return No1+No2;
    }
      int Addition(double No1 , double No2)
    {
        cout<<"addtionof two doubles :"<<"\n";
        return No1+No2;
    }


};
int main()
{
    Demo obj;
    int iRet =obj.Addition(10,11);
    cout<<"Addition of int is :"<<iRet<<"\n";

    int fRet =obj.Addition(10.10f,13.10f);
    cout<<"Addition of float is :"<<fRet<<"\n";

       int dRet =obj.Addition(10.10,14.10);
    cout<<"Addition of double is :"<<fRet<<"\n";
     

    return 0;
}