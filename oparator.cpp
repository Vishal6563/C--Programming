using namespace std;
#include<iostream>


class Demo
{
    public:
    int A,B;

    Demo(int i =10 , int j =20)
    {

        A = i;
        B = j;
    }
};
Demo operator + (Demo op1 ,Demo op2)
{
    cout<<"inside + operator"<<"\n";
    return Demo(op1.A+op2.A, op1.B+op2.B);
}
Demo operator - (Demo op1 ,Demo op2)
{
    cout<<"inside - operator"<<"\n";
    return Demo(op1.A-op2.A, op1.B-op2.B);
}
Demo operator * (Demo op1 ,Demo op2)
{
    cout<<"inside * operator"<<"\n";
    return Demo(op1.A*op2.A, op1.B*op2.B);
}
Demo operator / (Demo op1 ,Demo op2)
{
    cout<<"inside / operator"<<"\n";
    return Demo(op1.A/op2.A, op1.B/op2.B);
}

int main()
{
    
    Demo obj1(11,21);
    Demo obj2(51,111)
    Demo obj(0,0);

    obj = obj1 + obj2;




    return 0;
}