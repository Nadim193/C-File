#include<iostream>
#include<string>
using namespace std;

class studentbasicinfo{
                    string name,gender;
                    int age;
                public:
                    studentbasicinfo(){
                                    cout<<"BASE CLASS CONSTRACTOR..."<<endl;
                    }
                    void getbasicinfo(){
                                    cout<<"ENTER NAME : ";
                                    getline(cin,name);
                                    cout<<"ENTER GENDER : ";
                                    cin>>gender;
                                    cout<<"ENTER AGE : ";
                                    cin>>age;

                    }
                    void putbasicinfo(){
                                    cout<<"NAME : "<<name<<endl;
                                    cout<<"GENDER : "<<gender<<endl;
                                    cout<<"AGE : "<<age<<endl;
                    }
                    ~studentbasicinfo(){
                                     cout<<"BASE CLASS DISTRACTOR..."<<endl;
                    }

};

class studentresultinfo:public studentbasicinfo{
                float totalmarks;
                char grade;
            public:
                void getresultinfo(){
                                cout<<"ENTER MARKS  : ";
                                cin>>totalmarks;
                                cout<<"ENTER GRADE : ";
                                cin>>grade;
                }
                void putresultinfo(){
                                cout<<"TOTAL MARK : "<<totalmarks<<endl;
                                cout<<"GRAGE : "<<grade<<endl;
                }
                studentresultinfo(){
                                cout<<"CHILD CLASS CONSTRACTOR..."<<endl;
                }
            ~studentresultinfo(){
                                 cout<<"CHILD CLASS DISTRACTOR..."<<endl;
            }
};

int main(){
        studentresultinfo sr;
        sr.getbasicinfo();
        sr.getresultinfo();
        sr.putbasicinfo();
        sr.putresultinfo();
}
