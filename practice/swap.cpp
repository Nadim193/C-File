#include <iostream>
#include <conio.h>
using namespace std;

int swap(int x,int y,int s){
            s=x=x+y,y=x-y,x=x-y;
        return s;
} // function prototype

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    swap(a,b); // function call by reference
    cout<<"After swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    getch();
    return 0;
}
