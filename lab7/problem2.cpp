#include<iostream>
using namespace std;

class shape{
            int height,width;
        public:
            void setvalue(int h,int w){
                                height=h;
                                width=w;
            }
            int getheight(){
                            return height;
            }
            int getwidth(){
                            return width;
            }

};
class rectangle:public shape{
                        public:
                            int area(){
                                cout<<"AREA OF RECTANGLE : "<<getheight()*getwidth()<<endl;
                        }
};
class triangle:public shape{
                    public:
                        int area(){
                            cout<<"AREA OF TIANGLE : "<<0.5*(getheight()*getwidth());
                    }
};

int main(){
        int a,b;
        cin>>a>>b;
        rectangle re;
        re.setvalue(a,b);
        cout<<"HEIGHT IS : "<<re.getheight()<<endl;
        cout<<"WIDTH IS : "<<re.getwidth()<<endl;
        re.area();
        cout<<endl;
        triangle ti;
        ti.setvalue(a,b);
        cout<<"HEIGHT IS : "<<ti.getheight()<<endl;
        cout<<"WIDTH IS : "<<ti.getwidth()<<endl;
        ti.area();
}
