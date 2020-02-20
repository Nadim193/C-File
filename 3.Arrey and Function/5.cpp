#include<iostream>
using namespace std;

int main()
{
    int i,size,sum=0;
    cout<<"Enter the number of the elements : ";
    cin>>size;
    int a[size];
    for(i=0;i<size;i++)
    {
        cin>>a[i];
            //if(a[i]%2!=0)
            sum=sum+a[i];
    }

    cout<<"Output : "<<sum;

}


