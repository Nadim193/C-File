#include<iostream>
using namespace std;

int main()
{
    int i,j,c,s,n;
    cin>>n;
    s=n;
    for(i=1;i<=n;i++)
    {
        s--;
        for(c=1;c<=s;c++)
            cout<<" ";
        for(c=1;c<=2*i-1;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
