#include<iostream>
using namespace std;

class vahicle{
            int num_wheels,range;
        protected:
            int num_seat;
        public:
            vahicle(int n,int r){
                                num_wheels=n;
                                range=r;
            }
            void showv(){
                        cout<<"NUMBER OF WHEELS : "<<num_wheels<<endl;
                        cout<<"RANGE FOR VAHICLE : "<<range<<endl;
            }
            ~vahicle(){
                    cout<<"DISTRACTING FOR VAHICLE..."<<endl;
            }
};

class car:public vahicle{
                int passengers;
            public:
                car(int p,int n,int r):vahicle(n,r){
                                           passengers=p;
                                           cout<<"CONSTRACTOR FOR CAR..."<<endl;
                }
                void show(){
                            cout<<"\tFOR CAR"<<endl;
                            vahicle::showv();
                            cout<<"NUMBER OF PASSENGERS : "<<passengers<<endl;
                }
                ~car(){
                    cout<<"DISTRACTING FOR CAR..."<<endl;
                }
};

class truck:public vahicle{
                        int loadlimit;
                    public:
                        truck(int l,int n,int r):vahicle(n,r){
                                                loadlimit=l;
                                                cout<<"CONSTRACTOR FOR TRUCK..."<<endl;
                        }
                        void show(){
                                cout<<"\tFOR TRUCK"<<endl;
                                vahicle::showv();
                                cout<<"LOADLIMIT FOR TRUCK : "<<loadlimit<<endl;
                        }
                    ~truck(){
                    cout<<"DISTRACTING FOR TRUCK..."<<endl;
                    }
};

int main(){
            car c(700,4,67);
            c.show();
            truck tr(5000,8,567);
            tr.show();
            cout<<endl;
            cout<<endl;
}
