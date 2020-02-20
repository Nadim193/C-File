#include<iostream>
#include<string>
using namespace std;
struct student{
                char name[50];
                int age,roll;
                float mark;
}s[5];

int main(){
            cout<<"ENTER STUDENT'S INFOEMATION "<<endl;
            for(int i=0;i<5;i++){
                                cout<<"ENTER ROLL NUMBER : ";
                                cin>>s[i].roll;
                                cout<<"ENTER NAME : ";
                                cin>>s[i].name;
                                cout<<"ENTER AGE : ";
                                cin>>s[i].age;
                                cout<<"ENTER MAEK : ";
                                cin>>s[i].mark;

            }
            cout<<"DISPLAY INFORMATION...."<<endl;;

            for(int i=0;i<5;i++){

                                cout<<"ROLL NUMBER : "<<s[i].roll<<endl;
                                cout<<"NAME : "<<s[i].name<<endl;
                                cout<<"AGE : "<<s[i].age<<endl;
                                cout<<"MARK: "<<s[i].mark<<endl;
            }
}
