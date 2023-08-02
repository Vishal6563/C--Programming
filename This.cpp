 #include<iostream>
 using namespace std;

  class Demo
  {
    public:
    int No1;
    int No2;
    Demo(int i , int j)
    {
        No1 =i;
        No2=j;
    }

    void Fun (int A, int B)
    {
        cout<<"inside fun :"<<this->No1<<"\n";
        cout<<"inside fun  :"<<this->No2<<"\n";

    }
    void Gun(int A)
    {
         cout<<"inside Gun :"<<this->No1<<"\n";
        cout<<"inside Gun :"<<this->No2<<"\n";

    }
  };

  int main()
  {
    Demo obj1(11,21);
    Demo obj2(51,101);

    obj1.Fun(10,20);
    obj2.Gun(10); 



    return 0;
  }