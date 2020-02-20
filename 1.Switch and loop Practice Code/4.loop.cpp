#include<iostream>
using namespace std;
int main(){
                int n,i=1,sum=0;
                cout<<"\n\n 1+(1+2)+(3+2)+(5+2)....+n \n"<<endl;
                cout<<"\n Enter the value for n: ";
                cin>>n;
                        while(i<=n){
                            sum=sum+i;
                            i=i+2;
                        }
                cout<<"The series is: "<<i;
}



