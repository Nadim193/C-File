#include<iostream>
using namespace std;

class student{
            int roll;
            char name[50];
            int mark;
            float avg;
            void on(){
                    cout<<"INPUT START....";
            }
            void off(){
                    cout<<"INPUT OFF....";
            }
        public:
            int putdata();
            int printdata();

};

int student::putdata(){
                        on();
                       cout<<endl;
                       cout<<"ENTER NAME : ";
                       cin>>name;
                       cout<<"ENTER ROLL : ";
                       cin>>roll;
                       cout<<"ENTER MARK : ";
                       cin>>mark;
                       cout<<"ENTER AVARAGE MARK : ";
                       cin>>avg;
                       off();
}
int student::printdata(){
                       cout<<endl;
                       cout<<"NAME : "<<name<<endl;
                       cout<<"ROLL NO : "<<roll<<endl;
                       cout<<"MARK : "<<mark<<endl;
                       cout<<"AVARAGE MARK : "<<avg<<endl;
}

int main(){
            student s;
            s.putdata();
            s.printdata();
}
