#include<iostream>
#include<conio.h>
using namespace std;
int main(){
            int i,n,sum=0;
            cout<<"1+2+3+....+n"<<endl;
            cout<<"Enter the value of n : ";
            cin>>n;
                    for(i=1;i<=n;++i){
                        sum=sum+i;
                    }
            cout<<"The series is: "<<sum;
}

