#include<iostream>
using namespace std;

class Demo
{
    public:
    int No1;
    int No2;

    Demo()
    {
        cout<<"iinside default constractor\n";
        No1 =0;
        No2 =0;
    }

    Demo(int A,int B)
    {
         cout<<"iinside paramiter constractor\n"; //parametrised constroctor
        No1=A;
        No2=B;
    }
     
     Demo(Demo &ref) //copy constractor
     {
        cout<<"inside copy constractor\n";
        No1 =ref.No1;
        No2 =ref.No2;
     }

    ~Demo()
    {
        cout<<"inside  destractor\n";
    }

    void fun()
    {
        cout<<"inside fun\n";
    }
    void gun()
    {
        cout<<"inside gun\n";
    }
};

int main()
{
    cout<<"inside main\n";

    Demo obj1;

    obj1.fun();
    obj1.gun();

    cout<<"size of obj1 :"<<sizeof obj1<<"\n";

    cout<<"value of No1 from obj1 is :"<<obj1.No1<<"\n";
     cout<<"value of No2 from obj1 is :"<<obj1.No2<<"\n";
    
    
    Demo obj2(10,21);
    {
         cout<<"value of No1 from obj2 is :"<<obj2.No1<<"\n";
         cout<<"value of No2 from obj2 is :"<<obj2.No2<<"\n";

    }
     cout<<"size of obj2 :"<<sizeof obj2<<"\n";

    Demo obj3(obj2);
    {
          cout<<"value of No1 from obj3 is :"<<obj3.No1<<"\n";
         cout<<"value of No2 from obj3 is :"<<obj3.No2<<"\n";

    }
     cout <<"size of boj3:"<<sizeof obj3<<"\n";
     

    return 0;
}

