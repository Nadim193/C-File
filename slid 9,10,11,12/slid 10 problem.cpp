#include<iostream>
using namespace std;

class addition{
            int a,b;
        public:
            void setvalue(int x,int y){
                                a=x;
                                b=y;
            }
            int geta(){
                    return a;
            }
            int getb(){
                    return b;
            }
            int add(){
                    return a+b;
            }
};
int main(){
        addition ob;
        ob.setvalue(5,6);
        cout<<"ADDITION IS : "<<ob.add();
}
