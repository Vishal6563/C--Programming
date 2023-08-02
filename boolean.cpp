#include<iostream>

using namespace std;
 
bool checkEven(int No)
{
    if((No % 2)==0)
    {
    return true;
    }
    else
    {
    return false;
    }
}
int main()
{
    int value =0;
    bool bRet;
    cout<<"Enter number :\n";
    cin>>value;

    bRet = checkEven(value);

    if(bRet == true)
    {
        cout<<"it is even number\n";
    }
    else{
        cout<<"it is odd number\n";
    }

    return 0;
}