#include<iostream>
using namespace std;

int main()
{
    long int n,x,sum=0;
    cout<<"Enter individual digit : ";
    cin>>n;
    while(n!=0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;

    }
    cout<<sum<<endl;

}

