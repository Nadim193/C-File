#include<iostream>
using namespace std;

class car{
        int passengers;
    public:
        car(int p){
                    passengers=p;
        }
        void show(){
                    cout<<"NUMBER OF PASSENGER FOR CAR : "<<passengers;
        }
};

class truck{
                int limitload;
            public:
                truck(int l){
                            limitload=l;
                }
                void show(){
                            cout<<"LIMITED LOAD FOR TRUCk : "<<limitload;
                }
};
class vehicles:public truck,public car{
                        int num_whieel,range;
                    public:
                        vehicles(int l,int p,int n,int r):car(p),truck(l){
                                        num_whieel=n;
                                        range=r;
                        }
                        void showv(){
                                    car::show();
                                    truck::show();
                                    cout<<"NUMBER OF WHIEEL : "<<num_whieel;
                                    cout<<"RANGE FOR VEHICLES : "<<range;
                        }
};
int main(){
        vehicles ob(567,345,8,789);
        ob.showv();
}
