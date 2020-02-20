#include<iostream>
using namespace std;

int main(){
int i,j,sum[5],a[5],b[5],k,c;
for(i=0;i<5;i++)
{
    cout<<"1st number:";
    cin>>a[i];

}
for(j=0;j<5;j++){
    cout<<"2nd number:";
    cin>>b[j];
}
sum[0]=a[0]+b[0];
sum[1]=a[1]+b[1];
sum[2]=a[2]+b[2];
sum[3]=a[3]+b[3];
sum[4]=a[4]+b[4];
for(k=0;k<5;k++)
    cout<<sum[k]<<" ";

}


