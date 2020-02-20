#include<iostream>
using namespace std;
int main(){
            int h;
            cout<<"HOURS : ";
            cin>>h;
            cout<<endl;
            if(h<=40){
            cout<<"YOUR PAID : "<<h*10<<endl;
            }
            else if(h>40)
            {
                cout<<"OVER TIME PAID : "<<(h*10)*150<<endl;
            }
}
