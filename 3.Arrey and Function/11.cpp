#include<iostream>
using namespace std;
int addfunc(int a,int b)
{
    return a+b;
}
int subfunc(int a,int b)
{
    return a-b;
}

int mulfunc(int a,int b)
{
    return a*b;
}

int divfunc(int a,int b)
{
    return a/b;
}
int main()
{
    int x,y;
    cout<<"Enter two number :";
    cin>>x>>y;
cout<<"Addition="<<addfunc(x,y)<<endl;
cout<<"Substraction="<<subfunc(x,y)<<endl;
cout<<"Multiplication="<<mulfunc(x,y)<<endl;
cout<<"Divition="<<divfunc(x,y)<<endl;



}



