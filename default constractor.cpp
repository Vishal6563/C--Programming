#include<iostream>
using namespace std;

class Demo
{
    public:
    int A;
    int B;

    Demo()
    {
        A =10;
        B =20;

    }
    Demo(int i)
    {
        A = i;
        B = 20,


    }
    Demo(int i,int j)
    {
        A = i;
        B = j;

    }
};

int main()
{


    return 0;
}