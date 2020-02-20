#include<iostream>
#include<string>
using namespace std;

struct student{
                int roll,age;
                string name;
                float mark;
}s;

int main(){
            cout<<"ENTER NAME : ";
            cin>>s.name;
            cout<<"ENTER AGE : ";
            cin>>s.age;
            cout<<"ENTER ROLL : ";
            cin>>s.roll;
            cout<<"ENTER MARk : ";
            cin>>s.mark;
            cout<<endl;
                    cout<<"YOUR INFORMEASION "<<endl;
                    cout<<"NAME : "<<s.name<<endl;
                    cout<<"AGE : "<<s.age<<endl;
                    cout<<"ROLL : "<<s.roll<<endl;
                    cout<<"MARK : "<<s.mark<<endl;
}
