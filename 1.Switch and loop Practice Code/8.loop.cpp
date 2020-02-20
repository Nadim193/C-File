#include <iostream>
using namespace std;
int main()
{
    int i,s,e,sum=0;
    cout << "Enter a positive start point: ";
    cin >>s;
    cout << "Enter a positive start point: ";
    cin>>e;
    if(s>e){
    for(i=e;i<=s;i++)
    {
        if(i%2==0)
            sum=sum+i;
    }
}
   else{
        for(i=s;i<=e;i++)
        {
            if(i%2==0)
                sum=sum+i;
        }

    }
    cout<<sum<<endl;
    return 0;
}

