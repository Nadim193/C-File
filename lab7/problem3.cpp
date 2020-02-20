#include<iostream>
#include<string>
using namespace std;

class student{
            int roll;
            string name;
        public:
            student(int r,string n){
                            roll=r;
                            name=n;
            }
            void show(){
                    cout<<"NAME : "<<name<<endl;
                    cout<<"ROLL : "<<roll<<endl;
            }
};

class sports:public student{
                 int sports_score;
             public:
                 sports(int ss,string x,int y):student(y,x){
                                   sports_score=ss;
                 }
                 void showl(){
                          student::show();
                          cout<<"SPORTS SCORE : "<<sports_score;
                 }
};
class test:public student{
                    int math,pl;
                public:
                    test(int m,int p,string x,int y):student(y,x){
                                    math=m;
                                    pl=p;
                    }
                    void showl(){
                                student::show();
                                cout<<"MATH MARKS : "<<math<<endl;
                                cout<<"PROGRAMMING LANGUAGE MARKS : "<<pl<<endl;
                    }
};
int main(){
        string a;
        cin>>a;
        test ob(99,78,a,54);
        ob.showl();
        sports ob1(5,a,54);
        ob1.showl();

}
