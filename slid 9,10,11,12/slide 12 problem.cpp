#include<iostream>
using namespace std;
 class vehicle
 {
     int num_wheels,range;
 public:
    vehicle(int n,int w)
    {
        num_wheels=n;
        range=w;

    }
    void show()
    {
        cout<<"Wheels have : "<<num_wheels<<endl;
        cout<<"Range for vehicle : "<<range<<endl;
    }
 };
 class car:public vehicle
 {
     int passengers;
 public:
    car(int p,int n,int w):vehicle(n,w)
    {
        passengers=p;
    }
    void show()
    {
        vehicle::show();
        cout<<"A car can carry " <<passengers<<"passengers"<<endl;
    }
 };
 class truck:public vehicle
 {
     int loadlimit;
 public:
    truck(int l,int n,int w):vehicle(n,w)
    {

        loadlimit=l;
    }
    void show()
    {
        vehicle::show();
   cout<<"A truck can load " <<loadlimit<<"kg"<<endl;
    }
 };
 int main()
 {
     car c(100,4,70);
     c.show();
     truck tr(700,8,100);
     tr.show();
 }
