#include<iostream>
using namespace std;

int main()
{
    int Arr[5];  //static memory aalocation
    
    int *p = NULL;
    p=(int*)malloc(5* sizeof(int)); //dynamic memory malloc allocation

    int *q = NULL;
    q =(int*)calloc(5,sizeof(int));  //dynamic memory calloc allocation


    int *X = NULL;
    X = new int [5];


    free(p);
    free(q);
    delete [] X;
    return 0;
}
