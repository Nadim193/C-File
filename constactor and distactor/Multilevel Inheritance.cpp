#include<iostream>
using namespace std;

class student{
            int id;
        public:
            student(int i){
                        id=i;
            }
            void show(){
                        cout<<"ID : "<<id;
            }
};

class worker{
            int selary;
        public:
            worker(int sl){
                        selary=sl;
            }
            void show(){
                        cout<<"SELARY : "<<selary;
            }
};

class ptstudent:public student,public worker{
            int hour;
        public:
            ptstudent(int h,int sl,int id):student(id),worker(sl){
                            hour=h;
            }
            void showp(){
                        student::show();
                        cout<<endl;
                        worker::show();
                        cout<<endl;
                        cout<<"HOUR : "<<hour;
            }
};

int main(){
        ptstudent ob(6,2000,3);
        ob.showp();
}
