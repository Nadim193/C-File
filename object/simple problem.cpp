#include<iostream>
using namespace std;
class student{
            char name[50];
            int roll;
            int total;
            int age;
        public:
            void getdata();
            int putdata();
};

void student::getdata(){
                        cout<<"ENTER NAME : ";
                        cin>>name;
                        cout<<"ENTER ROLL : ";
                        cin>>roll;
                        cout<<"ENTER TOTAL : ";
                        cin>>total;
                        cout<<"ENTER AGE : ";
                        cin>>age;

}

int student::putdata(){
                        cout<<"STUDENT DETAILES : "<<endl<<endl;
                        cout<<"NAME : "<<name<<endl<<"ROLL : "<<roll<<endl;
                        cout<<"TOTAL MARK : "<<total<<endl<<"AGE : "<<age<<endl;
}

int main(){
            student d[50];
            int i,n;
            cout<<"ENTER STUDENT'S NUMBER : ";
            cin>>n;
            for(i=0;i<n;i++){
                            cout<<"ENTER DETAILS FOR STUDENT : "<<i+1<<endl;
                                d[i].getdata();
            }
            cout<<endl<<endl;

            for(i=0;i<n;i++){
                            cout<<"DETAILS FOR STUDENT : "<<i+1<<endl;
                                d[i].putdata();
            }
            cout<<endl<<endl;
}
