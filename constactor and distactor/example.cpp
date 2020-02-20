#include<iostream>
using namespace std;

class person{
            int x;
            public:
                 person(int n){
                        cout<<"Construct for person"<<endl;
                        x=n;
        }
        int showx(){
                    cout<<"VALUE x : "<<x;
        }
};
class student:public person{
                    int y;
                    public:
                        student(int m,int x):person(x){
                                cout<<"Construct for student"<<endl;
                                y=m;
                        }
                        int showy(){
                                cout<<"value y : "<<y;
                        }
};

int main(){
        student st(100,200);
        st.showx();
        cout<<endl;
        st.showy();
}
