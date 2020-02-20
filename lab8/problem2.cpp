#include<iostream>
using namespace std;

class number{
        public:
            void display(int var){
                            cout<<"DISPLAY INTAGER NUMBER : "<<var<<endl;
            }
            void display(float var){
                                cout<<"DISPLAY FLOAT NUMBER : "<<var<<endl;
            }
            void display(int var1, double var2){
                                cout<<"DISPLAY INTAGER NUMBER : "<<var1<<endl;
                                cout<<"DISPLAY DOUBLE NUMBER : "<<var2<<endl;
            }
};

int main(){
            float b;
            cout<<"ENTER FLOAT NUMBER : ";
            cin>>b;
            number ob;
            ob.display(23);
            ob.display(b);
            ob.display(34,6.9087);
}
