#include<iostream>
using namespace std;
void square(int *p);
int main()
{
    int a=10;
    cout<<"a: "<<a<<endl;

    square(&a);
    cout<<"new a: "<<a<<endl;
}

void square(int *p)
{
    int temp=*p;
    temp=temp*temp;
    *p=temp;
}