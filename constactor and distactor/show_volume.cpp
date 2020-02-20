#include<iostream>
using namespace std;

class box{
        double length,width,height;
    public:
        box(double x,double y,double z){
                            cout<<"Constructing..."<<endl;
                            length=x;
                            width=y;
                            height=z;
        }
        int show_volume(){
                    return length*width*height;
        }
        ~box(){
                cout<<"Destructing..."<<endl;
        }
};

int main(){
        double a,b,d;
        cout<<"ENTER length : ";
        cin>>a;
        cout<<"ENTER width : ";
        cin>>b;
        cout<<"ENTER height : ";
        cin>>d;
        box ob(a,b,d);
        cout<<"VOLUME OF THE BOX IS : "<<ob.show_volume()<<endl;
}
