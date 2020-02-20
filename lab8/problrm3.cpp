#include<iostream>
#include<string>
using namespace std;

class person{
        private:
            string name;
        protected:
            int age;
        public:
            person(string nm,int ag){
                                name=nm;
                                age=ag;
            }
            void show_person(){
                            cout<<"NAME : "<<name<<endl;
                            cout<<"AGE : "<<age<<endl;
            }
};

class Student:virtual public person{
                    protected:
                        float cgpa;
                    public:
                        Student(float cg,string nm,int ag):person(nm,ag){
                                                        cgpa=cg;
                        }
                        void show_student(){
                                        cout<<"CGPA FOR STUDENT : "<<cgpa<<endl;
                        }
};

class faculty:virtual public person{
                   protected:
                       int salary_per_hour;
                   public:
                        faculty(int sph,string nm,int ag):person(nm,ag){
                                                            salary_per_hour=sph;
                        }
                        void show_faculty(){
                                        cout<<"SALARY PAR HOUR FOR FACULTY : "<<salary_per_hour<<endl;
                        }
};

class TA:public Student,public faculty{
                            protected:
                                int hour_per_day;
                            public:
                                TA(int hpd,int sph,float cg,string nm,int ag):faculty(sph,nm,ag),Student(cg,nm,ag),person(nm,ag){
                                                              hour_per_day=hpd;

                                }
                                int salary(){
                                            int total;
                                            total=hour_per_day*30;
                                            cout<<"TOTAL SALARY PER MONTH FOR TA : "<<total<<endl;
                                }
                                void show_ta(){
                                            show_person();
                                            show_student();
                                            show_faculty();
                                            cout<<"SALARY PER DAY FOR FOR TA : "<<hour_per_day<<endl;
                                            salary();
                                }
};
int main(){
        TA ob(200,600,3.50,"nadim",18);
        ob.show_ta();
}
