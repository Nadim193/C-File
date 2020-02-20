#include<iostream>
using namespace std;

class box{
        double length,width,height;
    public:
        box(double l,double w,double h){
                                    length=l;
                                    width=w;
                                    height=h;
        }
        void show_volume(){
                        cout<<"LENGTH IS : "<<length<<endl;
                        cout<<"WIDTH IS : "<<width<<endl;
                        cout<<"HEIGHT IS : "<<height<<endl;
                        cout<<"VOLUME OF THE BOX IS : "<<(length*width*height);
        }
};

int main(){
            box ob(4,5,6);
            ob.show_volume();
}
