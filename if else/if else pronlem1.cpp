#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three integer number:";
    cin>>a>>b>>c;
    if(a<b&&a>c)
        cout<<"The minimum number is:"<<a;
    else if(b>a&&b>c)
        cout<<"The minimum number is:"<<b;
        else if(c>a&&c>b)
            cout<<"the minimum number is:"<<c;
}
