#include <iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cout<<"Take an input and check whether it is perfect number or not. : ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        j=n%i;
        if (j==0)
            sum=sum+i;
    }
    if(sum==n){
        cout<< n << " is " <<"PERFECT NUMBER ";
    }
    else{
            cout<< n << " is " <<"NOT PERFECT NUMBER ";
    }

    return 0;
}
