#include<iostream>
using namespace std;

class addition{
            int a,b;
        public:
            void setvalue(int x,int y);
            int geta();
            int getb();
            int add();
};
void addition::setvalue(int x,int y){
                                    a=x;
                                    b=y;
}
int addition::geta(){
                    return a;
}
int addition::getb(){
                    return b;
}

int addition::add(){
                    int c;
                    c=geta()+getb();
}

int main(){
            addition ob;
            int q,r;
            cout<<"ENTER NUMBER FOR A : ";
            cin>>q;
            cout<<"ENTER NUMBER FOR b : ";
            cin>>r;
            ob.setvalue(q,r);
            cout<<"VALUE OF A IS : "<<ob.geta()<<endl;
            cout<<"VALUE OF B IS : "<<ob.getb()<<endl;
            cout<<"ADDITION : "<<ob.add()<<endl;
}
