#include<iostream>
using namespace std;
int main(){
            int *p;
            p=new int;
            *p=22;
            cout<<*p<<endl;
            delete p;

}
