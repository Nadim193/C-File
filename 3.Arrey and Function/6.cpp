#include<iostream>
using namespace std;

int main()
{
    int i=0,j,size;
    cout<<"Enter the number of the elements : ";
    cin>>size;
    int a[size];
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(j=size-1;j>=0;j--)

    cout<<a[j]<<" ";

}



