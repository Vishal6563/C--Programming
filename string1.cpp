#include<iostream>
using namespace std;

int strlenx(char Str[])
{
    int iCnt = 0;

    while (*Str != '\0')
    {
        iCnt++;
        Str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet =0;

    cout<<"enter your first name : "<<"\n";
    cin>>Arr;

    iRet= strlenx(Arr);

    cout<<"Length of name is : "<<iRet<<"\n";

    return 0;
}