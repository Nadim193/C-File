#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter two integer number:";
    cin>>a>>b;
    cout<<"A. Addition"<<endl;
    cout<<"B. Subtraction"<<endl;
    cout<<"C. Multiplication"<<endl;
    cout<<"D. Division"<<endl;
    char option;

    cout<<"Select an option"<<endl;
    cin>>option;


    if(option=='A')
    cout<<"the addition is:"<<a+b<<endl;
   else if (option=='B')
    cout<<"the subtraction is:"<<a-b<<endl;
   else if (option=='C')
    cout<<"the multiplication is:"<<a*b<<endl;
   else if (option=='D')
    cout<<"the division is:"<<(float)a/b<<endl;
    else
        cout<<"Wrong option";

}
