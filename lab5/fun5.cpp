#include<iostream>
using namespace std;
int add_func(int a,int b){
                        cout<<a+b<<endl;

}
int sub_func(int a,int b){
                        cout<<a-b<<endl;

}
int prod_func(int a,int b){
                        cout<<a*b<<endl;

}
int div_func(int a,int b){
                        cout<<(float)a/b<<endl;

}


int main(){
    int x,y;
    cout<<"ENTER NUMBER FOR X : ";
    cin>>x;
     cout<<"ENTER NUMBER FOR Y : ";
    cin>>y;
    add_func(x,y);
    sub_func(x,y);
    prod_func(x,y);
    div_func(x,y);



}
