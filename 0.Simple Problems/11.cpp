#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,a,b,c,d,e,sum,sum2;
    cout<<"Enter the number of marks : ";
    cin>>n;
    cout<<"Enter the 1st mark : ";
    cin>>a;
    cout<<"Enter the 2nd mark : ";
    cin>>b;
    cout<<"Enter the 3rd mark : ";
    cin>>c;
    cout<<"Enter the 4th mark : ";
    cin>>d;
    cout<<"Enter the 5th mark : ";
    cin>>e;
    sum=a+b+c+d+e;
    sum2=sum/100*n;
    cout<<"The percentage of marks is : "<<sum2;

    return 0;
}
