#include<iostream>
using namespace std;

class mark{
            int roll;
            float avg;
        public:
            int putmark();
            int getmark();
};
int mark::putmark(){
                    cout<<"ENTER ROLL : ";
                    cin>>roll;
                    cout<<"ENTER AVRAGE MARK : ";
                    cin>>avg;
}
int mark::getmark(){
                    cout<<"ROLL : "<<roll<<endl;
                    cout<<"AVRAGE MARK : "<<avg<<"%"<<endl;
}
class student{
                char name[50];
            public:
                char putname();
                char getname();
                mark ob;
};
char student::putname(){

                        cout<<"ENTER NAME : ";
                        cin>>name;
                        ob.putmark();
}
char student::getname(){
                        cout<<"NAME : "<<name<<endl;
                        ob.getmark();
}
int main(){
            student stu;
            stu.putname();
            stu.getname();
}
