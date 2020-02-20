#include<iostream>
using namespace std;
int main(){
            int i,r,n,s=0;
            cout<<"ENTER NEMBER : ";
            cin>>n;
            for(i=1;i<=n;i++){
                r=i%10;
                s=s*10+r;
                i=i/10;
            }
            if(s==n)cout<<"palindroma";
            else cout<<"NOT";

}
