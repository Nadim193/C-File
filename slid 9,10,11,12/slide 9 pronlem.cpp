#include<iostream>
using namespace std;

struct employee{
                int id,salary;
}e1,e2;

int main(){
            string name;
            cout<<"ENTER NAME : ";
            cin>>name;
            cout<<"ENTER ID : ";
            cin>>e1.id;
            cout<<"ENTER SALARY : ";
            cin>>e1.salary;
            cout<<"DISPLAY INFORMATION...."<<endl;
            cout<<"NAME : "<<name<<endl;
            cout<<"ID NUMBER : "<<e1.id<<endl;
            cout<<"SALARY : "<<e1.salary<<endl;

            cout<<"ENTER NAME : ";
            cin>>name;
            cout<<"ENTER ID : ";
            cin>>e2.id;
            cout<<"ENTER SALARY : ";
            cin>>e2.salary;
            cout<<"DISPLAY INFORMATION...."<<endl;
            cout<<"NAME : "<<name<<endl;
            cout<<"ID NUMBER : "<<e2.id<<endl;
            cout<<"SALARY : "<<e2.salary<<endl;

}
