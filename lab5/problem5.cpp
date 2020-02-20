#include<iostream>
using namespace std;
int main(){
int s,sum=0,i;
cout<<"size : ";
cin>>s;
int a[s];
for(i=0;i<s;i++){
    cin>>a[i];
    if(a[i]%2 !=0)
    sum=sum+a[i];
}
cout<<sum<<" ";
}
